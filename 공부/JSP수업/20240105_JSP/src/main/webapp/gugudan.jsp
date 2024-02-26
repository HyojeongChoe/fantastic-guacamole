<%@ page language="java" contentType="text/html; charset=UTF-8"
	pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>GuGudan</title>
<style>
	td{
		border: 1px solid black;
		text-align : center;
	}
</style>
</head>
<body>
	<table border="1">
		  <tr>
        <td>x</td>
        <% for (int i = 2; i < 10; i++) { %>
            <td><%= i + "단" %></td>
        <% } %>
    </tr>
    <% for (int j = 1; j < 10; j++) { %>
        <tr>
            <td><%= j %></td>
            <% for (int i = 2; i < 10; i++) { %>
                <td><%= i * j %></td>
            <% } %>
        </tr>
    <% } %>
	</table>
</body>
</html>