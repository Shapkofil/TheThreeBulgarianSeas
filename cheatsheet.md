# Marching Tag
	<marquee scrollamount="" direction=""></marquee>

---

# Dropdown
	<select name="cars" multiple>  
	  <option value="volvo">Volvo</option>  
	  <option value="saab">Saab</option>  
	  <option value="fiat">Fiat</option>  
	  <option value="audi">Audi</option>  
	</select>  

# Text Area
	<textarea name="message" rows="10" cols="30">  
	The cat was playing in the garden.  
	</textarea>  

# Button
	<button type="button" onclick="alert('Hello World!')">Click Me!</button>  
	#### or  
	<input type=button value="Click me"> (in a form)

# Button Link with onclick
	<input type="button" onclick="window.location.href='https://www.google.com';" value="Google">  

# Button Link with action (blank_page)
	<form action="https://www.google.com" target="_blank">  
				<input type="submit" value="Google">  
	</form>  

# Radio Button set
	<form>  
	  <input type="radio" name="gender" value="male" checked> Male<br>  
	  <input type="radio" name="gender" value="female"> Female<br>  
	  <input type="radio" name="gender" value="other"> Other  
	</form>  

# Checkbox
	<form>
	  <input type="checkbox" name="vehicle1" value="Bike"> I have a bike<br>
	  <input type="checkbox" name="vehicle2" value="Car"> I have a car
	</form>

---

#Frame set
	<frameset cols(rows)="25%,*,25%">  
		<frame src="frame_a.html">  
		<frame src="frame_a.html">  
		<frame src="frame_a.html">  
	</frameset>  