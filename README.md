# Project1-demo-doxygen
## Sinh viên thực hiện: Vũ Văn Hùng
## Giảng viên hướng dẫn: ThS.Nguyễn Đức Tiến

### Doxygen là gì?
Doxygen là một công cụ tự động tạo tài liệu cho mã nguồn phần mềm. Nó được sử dụng để tạo ra tài liệu hệ thống tự cập nhật cho các dự án phần mềm sử dụng các mô tả được nhúng trong mã nguồn.

Một số điểm chính về Doxygen:

Doxygen có thể đọc mô tả nhúng trong các nhận xét đặc biệt trong mã nguồn C/C++, C#, Java, Objective-C, PHP, Python,IDL v.v. Nó sử dụng cú pháp @ đặc biệt để nhận biết các nhận xét này.

Nó tạo các trang HTML, LaTeX, RTF, XML, CVS, v.v để mô tả chi tiết cấu trúc dự án, các lớp, các hàm, biến, kiểu dữ liệu v.v.

Các mô tả được tự động cập nhật khi mã nguồn thay đổi.

Hỗ trợ nhiều ngôn ngữ lập trình phổ biến như C, C++, PHP, Java, Python, IDL.

Miễn phí và mã nguồn mở.

### Cài đặt Doxygen
Truy cập https://www.doxygen.nl/index.html và vào mục Download để tải file zip, giải nén sau đó chạy file doxywizard để mở giao diện của Doxygen

![image](https://github.com/vhung11/Project1-demo-doxygen/assets/132033226/94354dd6-1460-4639-aee4-62f2864cda8a)

### Sinh tài liệu
1. Chọn thư mục chứa file mã nguồn cần sinh tài liệu
2. Đặt tên cho Dự án
3. Có thể đặt phiên bản của dự án

![image](https://github.com/vhung11/Project1-demo-doxygen/assets/132033226/b54c7d5c-acb1-4519-819d-beead280b8ce)

tùy chọn khác để sinh tài liệu

![image](https://github.com/vhung11/Project1-demo-doxygen/assets/132033226/08aae101-645e-4818-ba7e-394ce57dcbb3)

Từ đây có thể sinh tài liệu cho các mã nguồn ở trong thư mục
![image](https://github.com/vhung11/Project1-demo-doxygen/assets/132033226/5d29b8eb-61fd-4934-b041-b58ae8df7c82)


### Graphiz
Graphviz là một bộ công cụ mã nguồn mở cho phép tạo các đồ thị. Nó cho phép người dùng định nghĩa các đồ thị bằng ngôn ngữ định nghĩa đồ thị (DOT) và sau đó xử lý chúng để tạo ra các định dạng đầu ra như PNG, SVG, PDF và v.v.

Một số điểm chính về Graphviz:

DOT là ngôn ngữ khai báo đồ thị được sử dụng bởi Graphviz. Người dùng có thể định nghĩa các nút, cạnh và thuộc tính của chúng bằng DOT.

Graphviz có thể xử lý các tập lệnh DOT và tạo ra các đồ thị ảnh trực quan dưới dạng định dạng SVG, PNG, JPG, PDF v.v.

Hỗ trợ nhiều loại đồ thị khác nhau như đồ thị không có hướng, đồ thị có hướng, đồ thị phân cấp, đồ thị phức tạp v.v.

Miễn phí và mã nguồn mở với nhiều công cụ liên quan.

Liên kết chặt chẽ với Doxygen cho phép tạo đồ thị UML từ mã nguồn.
### Cài đặt Graphiz và tích hợp vào Doxygen
Truy cập https://graphviz.org để download và cài đặt Graphiz
để tích hợp Graphiz vào Doxygen chúng ta cần chỉ rõ đường dẫn tới file bin của Graphiz cho Doxygen biết 

![image](https://github.com/vhung11/Project1-demo-doxygen/assets/132033226/667e9c65-f796-486a-ab82-7213591d417d)

sau đó chỉnh sửa lại mã nguồn và gen lại tài liệu
khi đó chúng ta sẽ nhận được những diagram trực quan về mã nguồn

### Ưu và nhược điểm của Doxygen và Graphviz:

#### Ưu điểm:

Doxygen:
Miễn phí và mã nguồn mở, hỗ trợ nhiều ngôn ngữ lập trình. Tự động cập nhật tài liệu khi mã nguồn thay đổi.

Graphviz:
Miễn phí, mã nguồn mở, có nhiều công cụ liên quan. Tạo ra được các đồ thị ảnh trực quan.

Kết hợp:
Tạo báo cáo tự động bao gồm tài liệu và đồ thị cho dự án. Liên kết chặt chẽ giữa Doxygen và Graphviz.

#### Nhược điểm:

Doxygen:
Cần nhúng thêm mô tả vào mã nguồn. Khó rút gọn thông tin.

Graphviz:
Chậm khi xử lý các đồ thị phức tạp, lớn. Chất lượng ảnh kém với các đồ thị lớn.

Kết hợp:
Phụ thuộc vào cách sử dụng và chất lượng nhúng thông tin, có thể dẫn tới báo cáo rời rạc.

Nhìn chung, kết hợp Doxygen và Graphviz mang lại nhiều lợi ích nhưng cần cân nhắc về khả năng xử lý của chúng đối với các dự án lớn, phức tạp.
