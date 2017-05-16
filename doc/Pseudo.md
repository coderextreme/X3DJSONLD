* Pseudocode for X3DJSONLD

```
	$("select").change(function() {
		$("x3d").remove();
		loadX3DJSON('body',$('select option:selected').text());
	});
	loadX3DJSON('body','examples/HelloWorld.json');
```

When the select changes, remove the x3d element, then load the selected file into the singleton body element.  When the page loads, load HelloWorld.json into the singleton body element



* function ConvertChildren(object, indent, parentkey, element)

When the parser sees a parentkey with a leading '-', it converts all the key/value pairs in the object following the parentkey following to X3DOM by calling ConvertToX3DOM.
indent is the amount to indent.
element is the parent element.

* function ConvertToX3DOM(object, indent, parentkey, element)

Main function for loading JSON
```
 for each key in object
	if the key is a number, set isArray to true
	if object is an array
		if object[key] is a number
			push object[key] on the localArray
		else if object[key] is a string
			push object[key] on the localArray
			set arrayOfStrings to true
		else if object[key] is a boolean
			push object[key] on the localArray
		else if object[key] is an object
			call ConvertToX3DOM with object = object[key] and parentkey = key
		else 
			log unknown type
	else if object[key] is an object
		if key starts with @
			call ConvertToX3DOM with object = object[key] and parentkey = key
		else if key starts with -
			call ConvertChildren with object = object[key] and parentkey = key
		else if key starts with #
			for each comment
				create child for comment
				append child to element
		else
			create a child element with tag key
			call ConvertToX3DOM with object = object[key] and parentkey = key
			appent child to element
	else if object[key] is a number
		set the key attribute of element to object[key]
	else if object[key] is a string
		if key is not a #comment
			set the key attribute of element to object[key]
	else if object[key] is a boolean
		set the key attribute of element to object[key]
	if object is an array
		if parentkey starts with @
			if this is an array of strings
				set arrayOfStrings to false
				set the parentkey attribute of element to the space separated array
			else
				set the parentkey attribute of element to the space separated array
		set isArray to false
	return element
```

* function loadX3DJS(json, file, xml, python, NS)

json is X3DJSON to load.  file is filename of input (used to find neighbors). xml is xml output, python is python output


returns element
```
	set element to the value of querying for selector
	if element is null
		log error found nothing
	else
		call ConvertToX3DOM with object = json and element = element
		reload x3dom
```

* function loadX3DJSON(selector, url);

selector is the CSS selector for the singleton node to append to.   url is a link to the JSON URL to load
```
retrieve the value from url into json.  Fail on any ajax error
	call loadX3DJS with json = json
```
