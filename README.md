<!DOCTYPE html>
<html lang="vi">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>ABC Center - Thanh Toán Học Phí</title>
    <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/6.0.0/css/all.min.css">
    <style>
        /* Tận dụng lại bộ Framework màu sắc và font từ các trang trước */
        * { margin: 0; padding: 0; box-sizing: border-box; }
        body { font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, sans-serif; background-color: #f5f7fa; color: #333; }
        .dashboard-container { display: flex; min-height: 100vh; }
        
        /* Sidebar (Giữ nguyên tính nhất quán) */
        .sidebar { width: 240px; background: linear-gradient(180deg, #2563eb 0%, #1d4ed8 100%); color: white; position: fixed; height: 100vh; left: 0; top: 0; }
        .logo { display: flex; align-items: center; gap: 12px; padding: 24px 20px; border-bottom: 1px solid rgba(255, 255, 255, 0.1); }
        .nav-item { display: flex; align-items: center; gap: 12px; padding: 14px 20px; color: rgba(255, 255, 255, 0.8); text-decoration: none; font-size: 14px; }
        .nav-item.active { background: rgba(255, 255, 255, 0.15); color: white; border-left: 4px solid white; }

        /* Main Content */
        .main-content { margin-left: 240px; flex: 1; padding-bottom: 40px; }
        .header { background: white; padding: 24px 40px; box-shadow: 0 1px 3px rgba(0,0,0,0.05); margin-bottom: 30px; }
        .page-title { font-size: 24px; font-weight: 700; color: #2563eb; }

        /* Payment Layout */
        .payment-grid { display: grid; grid-template-columns: 1.5fr 1fr; gap: 30px; padding: 0 40px; }
        
        /* Section Styling */
        .payment-card { background: white; border-radius: 12px; padding: 24px; box-shadow: 0 1px 3px rgba(0,0,0,0.05); border: 1px solid #e5e7eb; }
        .section-h3 { font-size: 16px; font-weight: 700; color: #1f2937; margin-bottom: 20px; display: flex; align-items: center; gap: 10px; }
        .section-h3 i { color: #2563eb; }

        /* Course List in Payment */
        .item-list { border-bottom: 1px solid #f3f4f6; padding-bottom: 15px; margin-bottom: 15px; }
        .course-item { display: flex; justify-content: space-between; align-items: center; padding: 10px 0; }
        .course-info .name { font-weight: 600; font-size: 14px; color: #1f2937; }
        .course-info .code { font-size: 12px; color: #6b7280; }
        .course-price { font-weight: 700; color: #2563eb; }

        /* Payment Methods */
        .method-options { display: grid; gap: 12px; }
        .method-item { border: 2px solid #e5e7eb; border-radius: 10px; padding: 16px; display: flex; align-items: center; gap: 15px; cursor: pointer; transition: all 0.2s; }
        .method-item:hover { border-color: #dbeafe; background: #f9fafb; }
        .method-item.selected { border-color: #2563eb; background: #eff6ff; }
        .method-item i { font-size: 24px; width: 30px; text-align: center; }
        .method-item .label { font-size: 14px; font-weight: 600; flex: 1; }
        .method-item .fa-check-circle { color: #2563eb; display: none; }
        .method-item.selected .fa-check-circle { display: block; }

        /* Summary & Promo */
        .promo-box { display: flex; gap: 10px; margin-bottom: 20px; }
        .promo-input { flex: 1; padding: 10px 15px; border: 1px solid #e5e7eb; border-radius: 8px; outline: none; }
        .btn-apply { background: #1f2937; color: white; border: none; padding: 0 20px; border-radius: 8px; cursor: pointer; font-size: 13px; }

        .summary-row { display: flex; justify-content: space-between; margin-bottom: 12px; font-size: 14px; color: #4b5563; }
        .summary-row.total { border-top: 1px solid #f3f4f6; pt: 15px; margin-top: 15px; font-size: 18px; font-weight: 800; color: #1f2937; }
        .summary-row.total .price { color: #2563eb; }

        .btn-pay { width: 100%; background: #2563eb; color: white; border: none; padding: 16px; border-radius: 10px; font-size: 16px; font-weight: 700; cursor: pointer; margin-top: 20px; transition: 0.3s; }
        .btn-pay:hover { background: #1d4ed8; box-shadow: 0 4px 12px rgba(37, 99, 235, 0.3); }

        .security-note { text-align: center; font-size: 12px; color: #9ca3af; margin-top: 15px; display: flex; align-items: center; justify-content: center; gap: 5px; }
    </style>
</head>
<body>
    <div class="dashboard-container">
        <aside class="sidebar">
            <div class="logo">
                <i class="fas fa-graduation-cap"></i>
                <div class="logo-info">
                    <div class="logo-title" style="font-weight: 700; font-size: 14px;">ABC CENTER</div>
                </div>
            </div>
            <nav class="nav-menu">
                <a href="#" class="nav-item"><i class="fas fa-book-open"></i><span>Đăng ký khóa học</span></a>
                <a href="#" class="nav-item active"><i class="fas fa-credit-card"></i><span>Thanh toán</span></a>
                <a href="#" class="nav-item"><i class="fas fa-history"></i><span>Lịch sử giao dịch</span></a>
            </nav>
        </aside>

        <main class="main-content">
            <header class="header">
                <h1 class="page-title">THANH TOÁN HỌC PHÍ</h1>
            </header>

            <div class="payment-grid">
                <div class="payment-left">
                    <div class="payment-card">
                        <h3 class="section-h3"><i class="fas fa-wallet"></i> CHỌN PHƯƠNG THỨC THANH TOÁN</h3>
                        <div class="method-options">
                            <div class="method-item selected">
                                <i class="fas fa-qrcode" style="color: #10b981;"></i>
                                <span class="label">QR Code (Momo / ZaloPay / VietQR)</span>
   <i class="fas fa-check-circle"></i>
                            </div>
                            <div class="method-item">
                                <i class="fas fa-university" style="color: #2563eb;"></i>
                                <span class="label">Thẻ ATM / Internet Banking</span>
                                <i class="fas fa-check-circle"></i>
                            </div>
                            <div class="method-item">
                                <i class="fab fa-cc-visa" style="color: #1e3a8a;"></i>
                                <span class="label">Thẻ quốc tế (Visa, Mastercard)</span>
                                <i class="fas fa-check-circle"></i>
                            </div>
                        </div>
                    </div>

                    <div class="payment-card" style="margin-top: 24px;">
                        <h3 class="section-h3"><i class="fas fa-info-circle"></i> THÔNG TIN NGƯỜI THANH TOÁN</h3>
                        <div style="display: grid; grid-template-columns: 1fr 1fr; gap: 15px;">
                            <div>
                                <label style="font-size: 12px; font-weight: 700; color: #6b7280;">HỌ VÀ TÊN</label>
                                <div style="padding: 10px 0; font-weight: 600;">THÂN PHƯƠNG NHI</div>
                            </div>
                            <div>
                                <label style="font-size: 12px; font-weight: 700; color: #6b7280;">MÃ HỌC VIÊN</label>
                                <div style="padding: 10px 0; font-weight: 600;">HV-2026-003</div>
                            </div>
                        </div>
                    </div>
                </div>

                <div class="payment-right">
                    <div class="payment-card">
                        <h3 class="section-h3"><i class="fas fa-file-invoice-dollar"></i> CHI TIẾT ĐƠN HÀNG</h3>
                        
                        <div class="item-list">
                            <div class="course-item">
                                <div class="course-info">
                                    <div class="name">IELTS Intensive 6.5+</div>
                                    <div class="code">Khóa học 6 tháng</div>
                                </div>
                                <div class="course-price">8.200.000đ</div>
                            </div>
                            <div class="course-item">
                                <div class="course-info">
                                    <div class="name">Giáo trình & Tài liệu</div>
                                    <div class="code">Bản in & Tài khoản Online</div>
                                </div>
                                <div class="course-price">300.000đ</div>
                            </div>
                        </div>

                        <div class="promo-box">
 <input type="text" class="promo-input" placeholder="Nhập mã giảm giá...">
                            <button class="btn-apply">ÁP DỤNG</button>
                        </div>

                        <div class="summary-details">
                            <div class="summary-row">
                                <span>Tạm tính</span>
                                <span>8.500.000đ</span>
                            </div>
                            <div class="summary-row">
                                <span>Giảm giá (Ưu đãi 10/01)</span>
                                <span style="color: #ef4444;">-500.000đ</span>
                            </div>
                            <div class="summary-row">
                                <span>Phí giao dịch</span>
                                <span>Miễn phí</span>
                            </div>
                            <div class="summary-row total">
                                <span>TỔNG CỘNG</span>
                                <span class="price">8.000.000đ</span>
                            </div>
                        </div>

                        <button class="btn-pay" onclick="alert('Đang kết nối tới cổng thanh toán...')">
                            THANH TOÁN NGAY
                        </button>

                        <div class="security-note">
                            <i class="fas fa-shield-alt"></i>
                            Thanh toán an toàn qua SSL/OTP
                        </div>
                    </div>
                </div>
            </div>
        </main>
    </div>
</body>
</html>                       
