<!DOCTYPE html>
<html lang="vi">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>ABC Center - Đăng Ký Khóa Học</title>
    <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/6.0.0/css/all.min.css">
    <style>
        /* Tận dụng lại bộ CSS Framework bạn đã cung cấp */
        * { margin: 0; padding: 0; box-sizing: border-box; }
        body { font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, sans-serif; background-color: #f5f7fa; color: #333; }
        .dashboard-container { display: flex; min-height: 100vh; }
        
        /* Sidebar Styles (Giữ nguyên) */
        .sidebar { width: 240px; background: linear-gradient(180deg, #2563eb 0%, #1d4ed8 100%); color: white; display: flex; flex-direction: column; position: fixed; height: 100vh; left: 0; top: 0; }
        .logo { display: flex; align-items: center; gap: 12px; padding: 24px 20px; border-bottom: 1px solid rgba(255, 255, 255, 0.1); }
        .logo i { font-size: 32px; background: white; color: #2563eb; padding: 8px; border-radius: 8px; }
        .logo-title { font-size: 14px; font-weight: 700; letter-spacing: 0.5px; }
        .nav-menu { flex: 1; padding: 20px 0; }
        .nav-item { display: flex; align-items: center; gap: 12px; padding: 14px 20px; color: rgba(255, 255, 255, 0.8); text-decoration: none; transition: all 0.3s ease; font-size: 14px; font-weight: 500; }
        .nav-item:hover, .nav-item.active { background: rgba(255, 255, 255, 0.15); color: white; border-left: 4px solid white; }
        
        /* Main Content */
        .main-content { margin-left: 240px; flex: 1; display: flex; flex-direction: column; }
        .header { background: white; padding: 24px 40px; display: flex; justify-content: space-between; align-items: center; box-shadow: 0 1px 3px rgba(0,0,0,0.05); }
        .page-title { font-size: 24px; font-weight: 700; color: #2563eb; letter-spacing: 0.5px; }

        /* Filter Section Customization */
        .filter-section { background: white; padding: 24px 40px; margin: 24px 40px; border-radius: 12px; box-shadow: 0 1px 3px rgba(0,0,0,0.05); display: flex; gap: 24px; align-items: flex-end; }
        .filter-group { flex: 1; }
        .filter-label { display: block; font-size: 11px; font-weight: 700; color: #6b7280; margin-bottom: 8px; letter-spacing: 0.5px; }
        .select-input { width: 100%; padding: 12px 16px; border: 1px solid #e5e7eb; border-radius: 8px; font-size: 14px; outline: none; }
        
        .btn-primary { background: #2563eb; color: white; border: none; padding: 12px 24px; border-radius: 8px; font-size: 14px; font-weight: 600; cursor: pointer; display: flex; align-items: center; gap: 8px; transition: all 0.3s ease; }
        .btn-primary:hover { background: #1d4ed8; transform: translateY(-1px); }

        /* Course List Styles */
        .course-grid { padding: 0 40px 40px 40px; display: grid; grid-template-columns: repeat(auto-fill, minmax(300px, 1fr)); gap: 24px; }
        .course-card { background: white; border-radius: 12px; overflow: hidden; box-shadow: 0 4px 6px -1px rgba(0,0,0,0.1); transition: transform 0.3s ease; border: 1px solid #e5e7eb; }
        .course-card:hover { transform: translateY(-5px); }
        .course-image { height: 160px; background: #dbeafe; display: flex; align-items: center; justify-content: center; position: relative; }
        .course-image i { font-size: 64px; color: #2563eb; }
        .course-tag { position: absolute; top: 12px; right: 12px; background: #2563eb; color: white; padding: 4px 12px; border-radius: 20px; font-size: 11px; font-weight: 700; }
        
        .course-content { padding: 20px; }
        .course-name { font-size: 18px; font-weight: 700; color: #1f2937; margin-bottom: 8px; height: 50px; overflow: hidden; }
        .course-info { display: flex; flex-direction: column; gap: 8px; margin-bottom: 20px; }
        .info-item { display: flex; align-items: center; gap: 8px; font-size: 13px; color: #6b7280; }
        .info-item i { width: 16px; color: #2563eb; }
        
        .course-footer { display: flex; justify-content: space-between; align-items: center; padding-top: 15px; border-top: 1px solid #f3f4f6; }
        .course-price { font-size: 18px; font-weight: 700; color: #2563eb; }
        .btn-register { background: #dbeafe; color: #2563eb; border: none; padding: 8px 16px; border-radius: 6px; font-weight: 600; cursor: pointer; transition: 0.3s; }
        .btn-register:hover { background: #2563eb; color: white; }

        .status-badge { font-size: 11px; padding: 4px 8px; border-radius: 4px; font-weight: 700; }
        .status-open { background: #d1fae5; color: #065f46; }

        @media (max-width: 768px) {
            .sidebar { width: 70px; }
            .main-content { margin-left: 70px; }
            .logo-title, .nav-item span { display: none; }
            .course-grid { grid-template-columns: 1fr; padding: 20px; }
        }
    </style>
</head>
<body>
    <div class="dashboard-container">
        <aside class="sidebar">
            <div class="logo">
                <i class="fas fa-graduation-cap"></i>
                <div class="logo-info">
                    <div class="logo-title">ABC CENTER</div>
                    <div class="logo-subtitle">HỌC VIÊN</div>
                </div>
            </div>
            <nav class="nav-menu">
                <a href="#" class="nav-item"><i class="fas fa-th-large"></i><span>Tổng quan</span></a>
                <a href="#" class="nav-item active"><i class="fas fa-book-open"></i><span>Đăng ký khóa học</span></a>
                <a href="#" class="nav-item"><i class="fas fa-calendar-alt"></i><span>Lịch học của tôi</span></a>
                <a href="#" class="nav-item"><i class="fas fa-history"></i><span>Lịch sử đăng ký</span></a>
                <a href="#" class="nav-item"><i class="fas fa-user"></i><span>Hồ sơ cá nhân</span></a>
            </nav>
        </aside>

        <main class="main-content">
            <header class="header">
                <h1 class="page-title">ĐĂNG KÝ KHÓA HỌC</h1>
                <div class="header-actions">
                    <div class="search-box" style="display: flex; background: #f5f7fa; padding: 10px 16px; border-radius: 8px; gap: 10px; width: 280px;">
                        <i class="fas fa-search" style="color: #9ca3af;"></i>
                        <input type="text" placeholder="Tìm tên khóa học..." style="border: none; background: transparent; outline: none; width: 100%;">
                    </div>
                    <button class="icon-btn" style="width: 40px; height: 40px; border-radius: 8px; border: none; background: #f5f7fa; color: #6b7280; cursor: pointer;">
                        <i class="fas fa-shopping-cart"></i>
                    </button>
                </div>
            </header>

            <section class="filter-section">
                <div class="filter-group">
                    <label class="filter-label">PHÂN LOẠI</label>
                    <select class="select-input">
                        <option>Tất cả khóa học</option>
                        <option>Tiếng Anh Giao Tiếp</option>
                        <option>Luyện thi IELTS</option>
                        <option>Tiếng Anh Cho Trẻ Em</option>
                    </select>
                </div>
                <div class="filter-group">
                    <label class="filter-label">TRÌNH ĐỘ</label>
                    <select class="select-input">
                        <option>Mọi trình độ</option>
                        <option>Beginner (Cơ bản)</option>
                        <option>Intermediate (Trung cấp)</option>
                        <option>Advanced (Nâng cao)</option>
                    </select>
                </div>
                <div class="filter-group">
                    <label class="filter-label">HÌNH THỨC HỌC</label>
                    <div style="display: flex; gap: 15px; margin-bottom: 10px;">
                        <label style="font-size: 14px;"><input type="checkbox" checked> Trực tiếp</label>
                        <label style="font-size: 14px;"><input type="checkbox"> Online</label>
                    </div>
                </div>
                <button class="btn-primary">
                    <i class="fas fa-filter"></i> LỌC KẾT QUẢ
                </button>
            </section>

            <div class="course-grid">
                <div class="course-card">
                    <div class="course-image">
                        <i class="fas fa-comments"></i>
                        <span class="course-tag">GIAO TIẾP</span>
                    </div>
                    <div class="course-content">
                        <div class="course-name">Tiếng Anh Giao Tiếp Chuyên Sâu cho Người Đi Làm</div>
                        <div class="course-info">
                            <div class="info-item"><i class="fas fa-clock"></i> 24 Buổi (3 tháng)</div>
                            <div class="info-item"><i class="fas fa-user-tie"></i> Ms. Thanh Thảo</div>
                            <div class="info-item"><i class="fas fa-check-circle"></i> Còn 5 chỗ trống</div>
                        </div>
                        <div class="course-footer">
                            <div class="course-price">4.500.000đ</div>
                            <button class="btn-register">ĐĂNG KÝ</button>
                        </div>
                    </div>
                </div>

                <div class="course-card">
                    <div class="course-image" style="background: #fef3c7;">
                        <i class="fas fa-award" style="color: #d97706;"></i>
                        <span class="course-tag" style="background: #d97706;">IELTS</span>
                    </div>
                    <div class="course-content">
                        <div class="course-name">IELTS Intensive 6.5+ (Cấp tốc)</div>
                        <div class="course-info">
                            <div class="info-item"><i class="fas fa-clock"></i> 48 Buổi (6 tháng)</div>
                            <div class="info-item"><i class="fas fa-user-tie"></i> Mr. Robert Chen</div>
                            <div class="info-item"><i class="fas fa-check-circle"></i> Đang mở đăng ký</div>
                        </div>
                        <div class="course-footer">
                            <div class="course-price">8.200.000đ</div>
                            <button class="btn-register">ĐĂNG KÝ</button>
                        </div>
                    </div>
                </div>

                <div class="course-card">
                    <div class="course-image" style="background: #dcfce7;">
                        <i class="fas fa-child" style="color: #059669;"></i>
                        <span class="course-tag" style="background: #059669;">KIDS</span>
                    </div>
                    <div class="course-content">
                        <div class="course-name">English for Kids - Level 2 (Starters)</div>
                        <div class="course-info">
                            <div class="info-item"><i class="fas fa-clock"></i> 36 Buổi</div>
                            <div class="info-item"><i class="fas fa-user-tie"></i> Ms. Diệu Linh</div>
                            <div class="info-item"><i class="fas fa-check-circle"></i> Còn 2 chỗ trống</div>
                        </div>
                        <div class="course-footer">
                            <div class="course-price">3.800.000đ</div>
                            <button class="btn-register">ĐĂNG KÝ</button>
                        </div>
                    </div>
                </div>
            </div>

            <footer class="footer" style="text-align: center; padding: 24px; color: #9ca3af; font-size: 13px;">
                <p>© 2023 ABC Foreign Language Center. All rights reserved.</p>
            </footer>
        </main>
    </div>
</body>
</html>
