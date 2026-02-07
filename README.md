<!DOCTYPE html>
<html lang="vi">
<head>
<meta charset="UTF-8">
<title>ABC Center – Đăng ký lớp học</title>
<meta name="viewport" content="width=device-width, initial-scale=1.0">

<style>
*{box-sizing:border-box;font-family:Segoe UI,Arial}
body{margin:0;background:#f3f6fb;color:#333}

/* Header */
.header{
    background:#fff;
    padding:14px 40px;
    display:flex;
    justify-content:space-between;
    align-items:center;
    border-bottom:1px solid #e5e7eb
}
.logo{font-weight:700;color:#2563eb}
.nav a{
    margin:0 12px;
    text-decoration:none;
    color:#555;
    font-weight:500
}
.nav a.active{color:#2563eb;border-bottom:2px solid #2563eb;padding-bottom:6px}

/* Layout */
.container{
    display:flex;
    padding:30px 40px;
    gap:30px
}

/* Sidebar */
.sidebar{
    width:280px;
    background:#fff;
    border-radius:12px;
    padding:20px;
    box-shadow:0 2px 6px rgba(0,0,0,.05)
}
.sidebar h3{
    background:#2563eb;
    color:#fff;
    padding:10px;
    border-radius:8px;
    font-size:15px
}
.info label{font-size:12px;color:#6b7280}
.info div{
    background:#f3f4f6;
    padding:8px;
    border-radius:6px;
    margin-bottom:12px;
    font-weight:600
}
.note{
    background:#eff6ff;
    padding:12px;
    border-radius:8px;
    font-size:13px
}

/* Main */
.main{
    flex:1;
    background:#fff;
    border-radius:12px;
    padding:24px;
    box-shadow:0 2px 6px rgba(0,0,0,.05)
}
.main-header{
    display:flex;
    justify-content:space-between;
    align-items:center
}
.search{
    padding:10px 14px;
    border-radius:20px;
    border:1px solid #ddd;
    width:260px
}

/* Filter */
.filters{margin:16px 0}
.filters button{
    border:none;
    background:#e5e7eb;
    padding:6px 14px;
    border-radius:20px;
    margin-right:8px;
    cursor:pointer;
    font-weight:600
}
.filters button.active{
    background:#2563eb;
    color:#fff
}

/* Table */
.table-header,.row{
    display:grid;
    grid-template-columns:2fr 1.5fr 2fr 1fr 1.3fr 1fr;
    padding:14px 10px;
    align-items:center
}
.table-header{
    background:#1e40af;
    color:#fff;
    border-radius:8px;
    font-size:13px;
    font-weight:700
}
.row{
    border-bottom:1px solid #eee;
    font-size:14px
}
.row:hover{background:#f9fafb}
.code{font-size:12px;color:#6b7280}

.btn{
    padding:8px 14px;
    border-radius:8px;
    border:none;
    font-weight:700;
    cursor:pointer
}
.btn-register{
    background:#e0edff;
    color:#2563eb
}
.btn-selected{
    background:#2563eb;
    color:#fff
}

/* Footer select */
.footer-select{
    margin-top:20px;
    display:flex;
    justify-content:space-between;
    align-items:center
}
.summary{
    display:flex;
    gap:20px
}
.box{
    border:1px solid #e5e7eb;
    padding:12px 16px;
    border-radius:10px;
    font-weight:600
}
.confirm{
    background:#2563eb;
    color:#fff;
    padding:14px 28px;
    border:none;
    border-radius:12px;
    font-size:15px;
    font-weight:700;
    cursor:pointer
}
</style>
</head>

<body>

<div class="header">
    <div class="logo">ABC Foreign Language Center</div>
    <div class="nav">
        <a href="#">Trang chủ</a>
        <a class="active" href="#">Lớp học</a>
        <a href="#">Lịch học</a>
        <a href="#">Kết quả</a>
    </div>
</div>

<div class="container">

    <!-- Sidebar -->
    <div class="sidebar">
        <h3>👤 Thông tin học viên</h3>
        <div class="info">
            <label>HỌ VÀ TÊN</label>
            <div>Nguyễn Văn A</div>

            <label>MÃ HỌC VIÊN</label>
            <div>ABC12345</div>

            <label>TRÌNH ĐỘ HIỆN TẠI</label>
            <div>Intermediate (B1)</div>
        </div>

        <div class="note">
            <b>Lưu ý đăng ký</b>
            <ul>
                <li>Tối đa 3 lớp</li>
                <li>Không trùng lịch</li>
                <li>Hoàn phí trong 3 ngày</li>
            </ul>
        </div>
    </div>

    <!-- Main -->
    <div class="main">
        <div class="main-header">
            <h2>Chọn lớp học</h2>
            <input class="search" placeholder="Tìm tên lớp, giáo viên...">
        </div>

        <div class="filters">
            <button class="active">Tất cả</button>
            <button>IELTS</button>
            <button>TOEIC</button>
            <button>Giao tiếp</button>
            <button>Thiếu nhi</button>
        </div>

        <div class="table-header">
            <div>TÊN LỚP</div>
            <div>GIÁO VIÊN</div>
            <div>LỊCH HỌC</div>
            <div>PHÒNG</div>
            <div>NGÀY BẮT ĐẦU</div>
            <div>THAO TÁC</div>
        </div>

        <div class="row">
            <div>
                <b>IELTS Intensive 6.5+</b>
                <div class="code">Code: ILT-65-01</div>
            </div>
            <div>Mr. John Smith</div>
            <div>Thứ 2,4,6 (18:00 - 20:00)</div>
            <div>Room 402</div>
            <div>15/10/2023</div>
            <div><button class="btn btn-register" onclick="selectClass(this,'ILT-65-01')">Đăng ký</button></div>
        </div>

        <div class="row">
            <div>
                <b>Advanced Grammar</b>
                <div class="code">Code: GRM-ADV-02</div>
            </div>
            <div>Ms. Sarah Connor</div>
            <div>Thứ 3,5 (19:30 - 21:00)</div>
            <div>Room 105</div>
            <div>20/10/2023</div>
            <div><button class="btn btn-selected">Đã chọn</button></div>
        </div>

        <div class="row">
            <div>
                <b>Business English 101</b>
                <div class="code">Code: BUS-EN-11</div>
            </div>
            <div>Mr. Robert P.</div>
            <div>Thứ 7,CN (08:00 - 10:00)</div>
            <div>Lab 01</div>
            <div>12/10/2023</div>
            <div><button class="btn btn-register" onclick="selectClass(this,'BUS-EN-11')">Đăng ký</button></div>
        </div>

        <div class="footer-select">
            <div class="summary">
                <div class="box">Lớp đã chọn<br><b id="selected">01 lớp</b></div>
                <div class="box">Ước tính học phí<br><b>3,500,000 VND</b></div>
            </div>
            <button class="confirm">XÁC NHẬN ĐĂNG KÝ LỚP</button>
        </div>
    </div>

</div>

<script>
function selectClass(btn, code){
    btn.innerText="Đã chọn";
    btn.className="btn btn-selected";
    alert("Đã chọn lớp: " + code);
}
</script>

</body>
</html>
