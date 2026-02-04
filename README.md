<!DOCTYPE html>
<html lang="vi">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>ABC Center - Quản Lý Lịch Học</title>
    <link rel="stylesheet" href="styles.css">
    <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/6.4.0/css/all.min.css">
</head>
<body>
    <div class="dashboard-container">
        <!-- Sidebar -->
        <aside class="sidebar">
            <div class="logo">
                <i class="fas fa-graduation-cap"></i>
                <div>
                    <div class="logo-title">ABC CENTER</div>
                    <div class="logo-subtitle">DASHBOARD</div>
                </div>
            </div>
            
            <nav class="nav-menu">
                <a href="#" class="nav-item">
                    <i class="fas fa-th-large"></i>
                    <span>Tổng quan</span>
                </a>
                <a href="#" class="nav-item active">
                    <i class="fas fa-calendar-alt"></i>
                    <span>Lịch học</span>
                </a>
                <a href="#" class="nav-item">
                    <i class="fas fa-users"></i>
                    <span>Lớp học</span>
                </a>
                <a href="#" class="nav-item">
                    <i class="fas fa-chalkboard-teacher"></i>
                    <span>Giáo viên</span>
                </a>
                <a href="#" class="nav-item">
                    <i class="fas fa-dollar-sign"></i>
                    <span>Học phí</span>
                </a>
            </nav>

            <div class="user-profile">
                <div class="user-avatar"></div>
                <div class="user-info">
                    <div class="user-name">Admin User</div>
                    <div class="user-role">Quản trị viên</div>
                </div>
            </div>
        </aside>

        <!-- Main Content -->
        <main class="main-content">
            <!-- Header -->
            <header class="header">
                <h1 class="page-title">QUẢN LÝ LỊCH HỌC</h1>
                <div class="header-actions">
                    <div class="search-box">
                        <i class="fas fa-search"></i>
                        <input type="text" placeholder="Tìm kiếm lịch học...">
                    </div>
                    <button class="icon-btn">
                        <i class="fas fa-bell"></i>
                    </button>
                    <button class="icon-btn">
                        <i class="fas fa-cog"></i>
                    </button>
                </div>
            </header>

            <!-- Filter Section -->
            <section class="filter-section">
                <div class="filter-group">
                    <label class="filter-label">XEM THEO CHI NHÁNH</label>
                    <div class="select-wrapper">
                        <select class="select-input">
                            <option>Chi nhánh Quận 1</option>
                            <option>Chi nhánh Quận 2</option>
                            <option>Chi nhánh Quận 3</option>
                        </select>
                        <i class="fas fa-chevron-down"></i>
                    </div>
                </div>

                <div class="filter-group">
                    <label class="filter-label">THỜI GIAN</label>
                    <div class="date-input-wrapper">
                        <input type="text" value="Tuần này: 04/09 - 10/09" class="date-input">
                        <i class="fas fa-calendar-alt"></i>
                    </div>
                </div>

                <div class="filter-group">
                    <label class="filter-label">TRẠNG THÁI</label>
                    <div class="status-filters">
                        <label class="checkbox-label">
                            <input type="checkbox" checked>
                            <span>Sắp diễn ra</span>
                        </label>
                        <label class="checkbox-label">
                            <input type="checkbox">
                            <span>Đã kết thúc</span>
                        </label>
                    </div>
                </div>

                <button class="btn-primary">
                    <i class="fas fa-plus"></i>
                    TẠO LỊCH MỚI
                </button>
            </section>

            <!-- Schedule List -->
            <section class="schedule-section">
                <div class="section-header">
                    <div class="section-title">
                        <i class="fas fa-list"></i>
                        <h2>DANH SÁCH BUỔI HỌC HÔM NAY (05/09/2023)</h2>
                    </div>
                    <div class="session-count">12 BUỔI HỌC</div>
                </div>

                <div class="schedule-table">
                    <div class="table-header">
                        <div class="col-time">THỜI GIAN</div>
                        <div class="col-class">LỚP HỌC / KHÓA HỌC</div>
                        <div class="col-teacher">GIÁO VIÊN</div>
                        <div class="col-room">PHÒNG</div>
                        <div class="col-status">TRẠNG THÁI</div>
                        <div class="col-action">THAO TÁC</div>
                    </div>

                    <div class="table-row">
                        <div class="col-time">
                            <div class="time-range">17:30 -<br>19:00</div>
                        </div>
                        <div class="col-class">
                            <div class="class-name">Tiếng Anh Giao Tiếp Chuyên Sâu</div>
                            <div class="class-code">Mã lớp: ABC-2023-09</div>
                        </div>
                        <div class="col-teacher">
                            <i class="fas fa-user-circle teacher-icon"></i>
                            <div>
                                <div class="teacher-name">Ms. Thanh Thảo</div>
                            </div>
                        </div>
                        <div class="col-room">
                            <div>Phòng<br>302</div>
                        </div>
                        <div class="col-status">
                            <span class="status-badge status-scheduled">ĐÃ ĐIỂM DANH</span>
                        </div>
                        <div class="col-action">
                            <button class="btn-edit">
                                <i class="fas fa-edit"></i>
                            </button>
                        </div>
                    </div>

                    <div class="table-row">
                        <div class="col-time">
                            <div class="time-range">19:15 -<br>20:45</div>
                        </div>
                        <div class="col-class">
                            <div class="class-name">IELTS Foundation 4.5+</div>
                            <div class="class-code">Mã lớp: IELTS-F-01</div>
                        </div>
                        <div class="col-teacher">
                            <i class="fas fa-user-circle teacher-icon"></i>
                            <div>
                                <div class="teacher-name">Mr. Robert Chen</div>
                            </div>
                        </div>
                        <div class="col-room">
                            <div>Phòng<br>105</div>
                        </div>
                        <div class="col-status">
                            <span class="status-badge status-waiting">CHỜ BẮT ĐẦU</span>
                        </div>
                        <div class="col-action">
                            <button class="btn-edit">
                                <i class="fas fa-edit"></i>
                            </button>
                        </div>
                    </div>

                    <div class="table-row">
                        <div class="col-time">
                            <div class="time-range">18:00 -<br>19:30</div>
                        </div>
                        <div class="col-class">
                            <div class="class-name">English for Kids - Level 2</div>
                            <div class="class-code">Mã lớp: KID-L2-05</div>
                        </div>
                        <div class="col-teacher">
                            <i class="fas fa-user-circle teacher-icon"></i>
                            <div>
                                <div class="teacher-name">Ms. Diệu Linh</div>
                            </div>
                        </div>
                        <div class="col-room">
                            <div>Phòng<br>201</div>
                        </div>
                        <div class="col-status">
                            <span class="status-badge status-upcoming">SẮP DIỄN RA</span>
                        </div>
                        <div class="col-action">
                            <button class="btn-edit">
                                <i class="fas fa-edit"></i>
                            </button>
                        </div>
                    </div>

                    <div class="table-row">
                        <div class="col-time">
                            <div class="time-range">08:00 -<br>11:00</div>
                        </div>
                        <div class="col-class">
                            <div class="class-name">Lớp Toeic Cấp Tốc 750+</div>
                            <div class="class-code">Mã lớp: TOEIC-750</div>
                        </div>
                        <div class="col-teacher">
                            <i class="fas fa-user-circle teacher-icon"></i>
                            <div>
                                <div class="teacher-name">Mr. Minh Quân</div>
                            </div>
                        </div>
                        <div class="col-room">
                            <div>Phòng<br>404</div>
                        </div>
                        <div class="col-status">
                            <span class="status-badge status-completed">ĐÃ KẾT THÚC</span>
                        </div>
                        <div class="col-action">
                            <button class="btn-edit">
                                <i class="fas fa-edit"></i>
                            </button>
                        </div>
                    </div>
                </div>

                <!-- Pagination -->
                <div class="pagination">
                    <div class="pagination-info">Hiển thị 4/12 buổi học</div>
                    <div class="pagination-controls">
                        <button class="page-btn"><i class="fas fa-chevron-left"></i></button>
                        <button class="page-btn active">1</button>
                        <button class="page-btn">2</button>
                        <button class="page-btn">3</button>
                        <button class="page-btn"><i class="fas fa-chevron-right"></i></button>
                    </div>
                </div>
            </section>

            <!-- Footer -->
            <footer class="footer">
                <p>© 2023 ABC Foreign Language Center. All rights reserved.</p>
            </footer>
        </main>
    </div>
</body>
</html>
***
* {
    margin: 0;
    padding: 0;
    box-sizing: border-box;
}

body {
    font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, sans-serif;
    background-color: #f5f7fa;
    color: #333;
}

.dashboard-container {
    display: flex;
    min-height: 100vh;
}

/* Sidebar Styles */
.sidebar {
    width: 240px;
    background: linear-gradient(180deg, #2563eb 0%, #1d4ed8 100%);
    color: white;
    display: flex;
    flex-direction: column;
    position: fixed;
    height: 100vh;
    left: 0;
    top: 0;
}

.logo {
    display: flex;
    align-items: center;
    gap: 12px;
    padding: 24px 20px;
    border-bottom: 1px solid rgba(255, 255, 255, 0.1);
}

.logo i {
    font-size: 32px;
    background: white;
    color: #2563eb;
    padding: 8px;
    border-radius: 8px;
}

.logo-title {
    font-size: 14px;
    font-weight: 700;
    letter-spacing: 0.5px;
}

.logo-subtitle {
    font-size: 12px;
    font-weight: 600;
    opacity: 0.9;
}

.nav-menu {
    flex: 1;
    padding: 20px 0;
}

.nav-item {
    display: flex;
    align-items: center;
    gap: 12px;
    padding: 14px 20px;
    color: rgba(255, 255, 255, 0.8);
    text-decoration: none;
    transition: all 0.3s ease;
    font-size: 14px;
    font-weight: 500;
}

.nav-item:hover {
    background: rgba(255, 255, 255, 0.1);
    color: white;
}

.nav-item.active {
    background: rgba(255, 255, 255, 0.15);
    color: white;
    border-left: 4px solid white;
}

.nav-item i {
    font-size: 18px;
    width: 20px;
}

.user-profile {
    display: flex;
    align-items: center;
    gap: 12px;
    padding: 20px;
    border-top: 1px solid rgba(255, 255, 255, 0.1);
}

.user-avatar {
    width: 40px;
    height: 40px;
    background: rgba(255, 255, 255, 0.2);
    border-radius: 50%;
}

.user-name {
    font-size: 14px;
    font-weight: 600;
}

.user-role {
    font-size: 12px;
    opacity: 0.8;
}

/* Main Content */
.main-content {
    margin-left: 240px;
    flex: 1;
    display: flex;
    flex-direction: column;
}

/* Header */
.header {
    background: white;
    padding: 24px 40px;
    display: flex;
    justify-content: space-between;
    align-items: center;
    box-shadow: 0 1px 3px rgba(0, 0, 0, 0.05);
}

.page-title {
    font-size: 24px;
    font-weight: 700;
    color: #2563eb;
    letter-spacing: 0.5px;
}

.header-actions {
    display: flex;
    align-items: center;
    gap: 16px;
}

.search-box {
    display: flex;
    align-items: center;
    background: #f5f7fa;
    padding: 10px 16px;
    border-radius: 8px;
    gap: 10px;
    width: 280px;
}

.search-box i {
    color: #9ca3af;
}

.search-box input {
    border: none;
    background: transparent;
    outline: none;
    width: 100%;
    font-size: 14px;
    color: #333;
}

.search-box input::placeholder {
    color: #9ca3af;
}

.icon-btn {
    width: 40px;
    height: 40px;
    border-radius: 8px;
    border: none;
    background: #f5f7fa;
    color: #6b7280;
    cursor: pointer;
    display: flex;
    align-items: center;
    justify-content: center;
    transition: all 0.3s ease;
}

.icon-btn:hover {
    background: #e5e7eb;
    color: #2563eb;
}

/* Filter Section */
.filter-section {
    background: white;
    padding: 24px 40px;
    margin: 24px 40px;
    border-radius: 12px;
    box-shadow: 0 1px 3px rgba(0, 0, 0, 0.05);
    display: flex;
    gap: 24px;
    align-items: flex-end;
}

.filter-group {
    flex: 1;
}

.filter-label {
    display: block;
    font-size: 11px;
    font-weight: 700;
    color: #6b7280;
    margin-bottom: 8px;
    letter-spacing: 0.5px;
}

.select-wrapper {
    position: relative;
}

.select-input {
    width: 100%;
    padding: 12px 16px;
    border: 1px solid #e5e7eb;
    border-radius: 8px;
    font-size: 14px;
    color: #333;
    background: white;
    cursor: pointer;
    appearance: none;
    outline: none;
}

.select-wrapper i {
    position: absolute;
    right: 16px;
    top: 50%;
    transform: translateY(-50%);
    color: #6b7280;
    pointer-events: none;
    font-size: 12px;
}

.date-input-wrapper {
    position: relative;
}

.date-input {
    width: 100%;
    padding: 12px 40px 12px 16px;
    border: 1px solid #e5e7eb;
    border-radius: 8px;
    font-size: 14px;
    color: #333;
    background: white;
    outline: none;
}

.date-input-wrapper i {
    position: absolute;
    right: 16px;
    top: 50%;
    transform: translateY(-50%);
    color: #2563eb;
}

.status-filters {
    display: flex;
    gap: 16px;
}

.checkbox-label {
    display: flex;
    align-items: center;
    gap: 8px;
    cursor: pointer;
    font-size: 14px;
    color: #333;
}

.checkbox-label input[type="checkbox"] {
    width: 18px;
    height: 18px;
    cursor: pointer;
    accent-color: #2563eb;
}

.btn-primary {
    background: #2563eb;
    color: white;
    border: none;
    padding: 12px 24px;
    border-radius: 8px;
    font-size: 14px;
    font-weight: 600;
    cursor: pointer;
    display: flex;
    align-items: center;
    gap: 8px;
    transition: all 0.3s ease;
    white-space: nowrap;
}

.btn-primary:hover {
    background: #1d4ed8;
    transform: translateY(-1px);
    box-shadow: 0 4px 8px rgba(37, 99, 235, 0.3);
}

/* Schedule Section */
.schedule-section {
    background: white;
    margin: 0 40px 40px 40px;
    border-radius: 12px;
    box-shadow: 0 1px 3px rgba(0, 0, 0, 0.05);
    overflow: hidden;
}

.section-header {
    background: linear-gradient(135deg, #2563eb 0%, #1d4ed8 100%);
    color: white;
    padding: 20px 30px;
    display: flex;
    justify-content: space-between;
    align-items: center;
}

.section-title {
    display: flex;
    align-items: center;
    gap: 12px;
}

.section-title h2 {
    font-size: 16px;
    font-weight: 700;
    letter-spacing: 0.3px;
}

.session-count {
    background: rgba(255, 255, 255, 0.2);
    padding: 6px 16px;
    border-radius: 20px;
    font-size: 13px;
    font-weight: 600;
}

/* Table Styles */
.schedule-table {
    padding: 24px 30px;
}

.table-header {
    display: grid;
    grid-template-columns: 100px 2fr 1.5fr 100px 140px 80px;
    gap: 16px;
    padding: 12px 0;
    border-bottom: 2px solid #e5e7eb;
    margin-bottom: 16px;
}

.table-header > div {
    font-size: 11px;
    font-weight: 700;
    color: #6b7280;
    letter-spacing: 0.5px;
}

.table-row {
    display: grid;
    grid-template-columns: 100px 2fr 1.5fr 100px 140px 80px;
    gap: 16px;
    padding: 20px 0;
    border-bottom: 1px solid #f3f4f6;
    align-items: center;
    transition: all 0.3s ease;
}

.table-row:hover {
    background: #f9fafb;
}

.time-range {
    font-size: 15px;
    font-weight: 600;
    color: #2563eb;
    line-height: 1.4;
}

.class-name {
    font-size: 14px;
    font-weight: 600;
    color: #1f2937;
    margin-bottom: 4px;
}

.class-code {
    font-size: 12px;
    color: #9ca3af;
}

.col-teacher {
    display: flex;
    align-items: center;
    gap: 10px;
}

.teacher-icon {
    font-size: 32px;
    color: #2563eb;
}

.teacher-name {
    font-size: 13px;
    color: #1f2937;
}

.col-room {
    font-size: 14px;
    font-weight: 600;
    color: #4b5563;
    line-height: 1.4;
}

.status-badge {
    display: inline-block;
    padding: 6px 12px;
    border-radius: 6px;
    font-size: 11px;
    font-weight: 700;
    letter-spacing: 0.3px;
}

.status-scheduled {
    background: #d1fae5;
    color: #065f46;
}

.status-waiting {
    background: #fed7aa;
    color: #92400e;
}

.status-upcoming {
    background: #dbeafe;
    color: #1e40af;
}

.status-completed {
    background: #e5e7eb;
    color: #4b5563;
}

.btn-edit {
    width: 36px;
    height: 36px;
    border-radius: 6px;
    border: none;
    background: #dbeafe;
    color: #2563eb;
    cursor: pointer;
    display: flex;
    align-items: center;
    justify-content: center;
    transition: all 0.3s ease;
}

.btn-edit:hover {
    background: #2563eb;
    color: white;
}

/* Pagination */
.pagination {
    display: flex;
    justify-content: space-between;
    align-items: center;
    padding: 20px 30px;
    border-top: 1px solid #f3f4f6;
}

.pagination-info {
    font-size: 13px;
    color: #6b7280;
}

.pagination-controls {
    display: flex;
    gap: 8px;
}

.page-btn {
    width: 36px;
    height: 36px;
    border-radius: 6px;
    border: 1px solid #e5e7eb;
    background: white;
    color: #6b7280;
    cursor: pointer;
    display: flex;
    align-items: center;
    justify-content: center;
    font-size: 14px;
    font-weight: 500;
    transition: all 0.3s ease;
}

.page-btn:hover {
    border-color: #2563eb;
    color: #2563eb;
}

.page-btn.active {
    background: #2563eb;
    color: white;
    border-color: #2563eb;
}

/* Footer */
.footer {
    text-align: center;
    padding: 24px;
    color: #9ca3af;
    font-size: 13px;
}

/* Responsive Design */
@media (max-width: 1200px) {
    .table-header,
    .table-row {
        grid-template-columns: 90px 1.5fr 1.2fr 90px 120px 70px;
        gap: 12px;
    }
    
    .filter-section {
        flex-wrap: wrap;
    }
    
    .filter-group {
        min-width: 200px;
    }
}

@media (max-width: 768px) {
    .sidebar {
        width: 70px;
    }
    
    .main-content {
        margin-left: 70px;
    }
    
    .logo-title,
    .logo-subtitle,
    .nav-item span,
    .user-info {
        display: none;
    }
    
    .nav-item {
        justify-content: center;
    }
    
    .filter-section {
        padding: 16px 20px;
        margin: 16px 20px;
    }
    
    .schedule-section {
        margin: 0 20px 20px 20px;
    }
    
    .header {
        padding: 16px 20px;
    }
    
    .search-box {
        width: 200px;
    }
}
