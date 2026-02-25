<!DOCTYPE html>
<html lang="vi">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Đăng Ký Thành Viên</title>
    <link rel="stylesheet" href="style.css">
    <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/6.4.0/css/all.min.css">
</head>
<body>

    <div class="register-wrapper">
        <div class="header-banner">
            Đăng ký thành viên
        </div>

        <p class="sub-text">
            Tham gia cùng ABC Center để bắt đầu hành trình chinh phục ngôn ngữ
        </p>

        <form class="form-container" action="#">
            
            <div class="form-row">
                <div class="form-group">
                    <label>Họ và tên</label>
                    <div class="input-wrapper">
                        <i class="fa-solid fa-user input-icon"></i>
                        <input type="text" placeholder="Nhập họ và tên">
                    </div>
                </div>

                <div class="form-group">
                    <label>Số điện thoại</label>
                    <div class="input-wrapper">
                        <i class="fa-solid fa-phone input-icon"></i>
                        <input type="tel" placeholder="Nhập số điện thoại">
                    </div>
                </div>
            </div>

            <div class="form-row">
                <div class="form-group full-width">
                    <label>Email</label>
                    <div class="input-wrapper">
                        <i class="fa-solid fa-envelope input-icon"></i>
                        <input type="email" placeholder="example@email.com">
                    </div>
                </div>
            </div>

            <div class="form-row">
                <div class="form-group full-width">
                    <label>Tên đăng nhập</label>
                    <div class="input-wrapper">
                        <i class="fa-solid fa-circle-user input-icon"></i>
                        <input type="text" placeholder="Chọn tên đăng nhập">
                    </div>
                </div>
            </div>

            <div class="form-row">
                <div class="form-group">
                    <label>Mật khẩu</label>
                    <div class="input-wrapper">
                        <i class="fa-solid fa-lock input-icon"></i>
                        <input type="password" placeholder="Nhập mật khẩu">
                        <i class="fa-regular fa-eye-slash toggle-password"></i>
                    </div>
                </div>

                <div class="form-group">
                    <label>Xác nhận mật khẩu</label>
                    <div class="input-wrapper">
                        <i class="fa-solid fa-lock input-icon"></i>
                        <input type="password" placeholder="Xác nhận lại mật khẩu">
                         <i class="fa-regular fa-eye-slash toggle-password"></i>
                    </div>
                </div>
            </div>

            <button type="submit" class="submit-btn">Đăng ký tài khoản</button>

            <div class="form-footer">
                Đã có tài khoản? <a href="#">Đăng nhập ngay</a>
            </div>

        </form>
    </div>

</body>
</html>
/* Thiết lập cơ bản */
* {
    box-sizing: border-box;
    margin: 0;
    padding: 0;
}

body {
    font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
    background-color: #f5f5f5; /* Màu nền web xám nhẹ */
    display: flex;
    justify-content: center;
    align-items: center;
    min-height: 100vh;
}

/* Khung bao ngoài form */
.register-wrapper {
    background-color: #fff;
    width: 100%;
    max-width: 900px;
    border-radius: 8px;
    box-shadow: 0 4px 15px rgba(0, 0, 0, 0.1);
    overflow: hidden; /* Để bo góc header */
    margin: 20px;
}

/* Header màu xanh */
.header-banner {
    background-color: #2b78e4;
    color: white;
    text-align: center;
    padding: 25px 0;
    font-size: 24px;
    font-weight: bold;
    text-transform: uppercase;
    letter-spacing: 1px;
}

/* Dòng chữ phụ dưới header */
.sub-text {
    text-align: center;
    color: #888;
    margin: 30px 20px;
    font-size: 14px;
}

/* Container chứa các ô input */
.form-container {
    padding: 0 60px 40px 60px;
}

/* Một hàng trong form */
.form-row {
    display: flex;
    gap: 30px; /* Khoảng cách giữa 2 cột */
    margin-bottom: 20px;
}

/* Nhóm label và input */
.form-group {
    flex: 1; /* Để chia đều chiều rộng */
    display: flex;
    flex-direction: column;
}

/* Style cho Label (Tiêu đề ô nhập) */
.form-group label {
    font-size: 12px;
    font-weight: 700;
    color: #2b78e4; /* Màu chữ xanh */
    text-transform: uppercase;
    margin-bottom: 8px;
}

/* Wrapper để chứa input và icon */
.input-wrapper {
    position: relative;
    width: 100%;
}

/* Ô nhập liệu Input */
.input-wrapper input {
    width: 100%;
    padding: 12px 40px 12px 40px; /* Padding trái phải để tránh icon */
    border: 1px solid #e0e0e0;
    border-radius: 4px;
    font-size: 14px;
    outline: none;
    transition: border 0.3s;
    color: #333;
}

.input-wrapper input:focus {
    border-color: #2b78e4;
}

.input-wrapper input::placeholder {
    color: #ccc;
}

/* Icon bên trái */
.input-icon {
    position: absolute;
    left: 15px;
    top: 50%;
    transform: translateY(-50%);
    color: #aaa;
    font-size: 14px;
}

/* Icon con mắt bên phải */
.toggle-password {
    position: absolute;
    right: 15px;
    top: 50%;
    transform: translateY(-50%);
    color: #aaa;
    cursor: pointer;
    font-size: 14px;
}

/* Nút Đăng ký */
.submit-btn {
    width: 100%;
    padding: 15px;
    background-color: #2b78e4;
    color: white;
    border: none;
    border-radius: 6px;
    font-size: 16px;
    font-weight: bold;
    text-transform: uppercase;
    cursor: pointer;
    margin-top: 10px;
    box-shadow: 0 4px 6px rgba(43, 120, 228, 0.2);
    transition: background-color 0.3s;
}

.submit-btn:hover {
    background-color: #1a64c7;
}

/* Footer Login Link */
.form-footer {
    text-align: center;
    margin-top: 25px;
    font-size: 13px;
    color: #666;
}

.form-footer a {
    color: #2b78e4;
    font-weight: bold;
    text-decoration: none;
    margin-left: 5px;
}

.form-footer a:hover {
    text-decoration: underline;
}

/* Responsive: Chuyển thành 1 cột trên màn hình nhỏ */
@media (max-width: 768px) {
    .form-row {
        flex-direction: column;
        gap: 15px;
    }
    .form-container {
        padding: 0 20px 30px 20px;
    }
}
