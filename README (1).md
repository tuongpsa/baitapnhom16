# Báo cáo Bài tập lớn - Nhóm 4

## 1. Thông tin nhóm
| STT | Họ và tên | MSSV | Vai trò |
|---|---|---|---|
| 1 | Đào Tiến Tưởng | 24022841 | Nhóm trưởng |
| 2 | Cao Nguyễn Lâm | 24022808 | Thành viên |
| 3 | Hoàng Minh Quân | 24022824 | Thành viên |
| 4 | Hoàng Thái Đôn | 24022777 | Thành viên |
| 5 | Nguyễn Tiên Phong | 24022823 | Thành viên |

---

## 2. Thông tin bài tập
- **Tên bài toán**: Giải quyết bài toán N-Queens

---

## 3. Hướng giải quyết bài toán

### a. Phân tích bài toán
- Đặt N quân hậu trên bàn cờ NxN sao cho không quân hậu nào ăn nhau.
- Quân hậu có thể tấn công theo hàng, cột và đường chéo.
- Mục tiêu: In ra tổng số cách và các giải pháp đặt quân hậu sao cho không quân nào ăn nhau.
### b. Thuật toán/Hướng tiếp cận
-Sử dụng phương pháp Backtracking,thử từng bước, nếu gặp lỗi thì quay lui để thử lựa chọn khác.
-Đặt quân hậu từng hàng một (từ hàng trên xuống).
-Với mỗi hàng, thử đặt quân hậu vào các cột khả thi.
-Nếu đặt thành công ở hàng cuối cùng → Lưu lại kết quả.
-Nếu không tìm thấy cách đặt, lùi lại hàng trước và thử phương án khác.
### c. Ưu điểm và hạn chế

---

## 4. Ví dụ minh hoạ
### Ví dụ 1
**Input:**  
nhập n=1  
**Output:**  
Q  
**Giải thích:**  
với n=1 thì bàn cờ có kích thước 1*1 nên chỉ có 1 ô có thể đặt hậu.

### Ví dụ 2
**Input:**  
n=2;  
**Output:**  
No solution!  
**Giải thích:**  
với bàn cờ 2*2 thì việc đặt 2 quân hậu sao cho không ăn nhau là bất khả thi.
### Ví dụ 3
**Input:**  
n=4
**Output:**  
Number of solutions is 2
Solution 1 :
. Q . .
. . . Q
Q . . .
. . Q .
Solution 2 :
. . Q .
Q . . .
. . . Q
. Q . .
---
**Giải thích:**  
-Bắt đầu từ hàng đầu tiên (row = 1), thử đặt quân hậu vào từng cột (col = 1 -> 4).
-Với mỗi cột hợp lệ, tiếp tục đặt quân hậu vào hàng tiếp theo (row + 1).
-Nếu đặt thành công đến hàng cuối (row = 4), lưu lại một lời giải.
-Nếu không còn vị trí hợp lệ, quay lui  để thử phương án khác.

---

## 5. Link video báo cáo
[Video báo cáo nhóm X](#)

---

## 6. Link source code
[Thư mục src](./src)

