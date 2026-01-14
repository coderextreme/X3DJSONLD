package net.coderextreme.visitor;
public class FontStyleElement extends org.web3d.x3d.jsail.Text.FontStyle implements VisitableElement
{
	private org.web3d.x3d.jsail.Text.FontStyle delegate = null;
	public FontStyleElement(org.web3d.x3d.jsail.Text.FontStyle delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getCssClassElement().accept(v);
		getFamilyElement().accept(v);
		getHorizontalElement().accept(v);
		getISElement().accept(v);
		getJustifyElement().accept(v);
		getLanguageElement().accept(v);
		getLeftToRightElement().accept(v);
		getMetadataElement().accept(v);
		getSizeElement().accept(v);
		getSpacingElement().accept(v);
		getCssStyleElement().accept(v);
		getTopToBottomElement().accept(v);
		getDEFElement().accept(v);
		getUSEElement().accept(v);
	}
	public SFStringElement getCssClassElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getCssClass()));
}
	public MFStringElement getFamilyElement() { 		 return new MFStringElement(new org.web3d.x3d.jsail.fields.MFString(delegate.getFamily()));
}
	public SFBoolElement getHorizontalElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getHorizontal()));
}
	public SFNodeElement getISElement() { 		 return new SFNodeElement(new ISElement(delegate.getIS()));
}
	public MFStringElement getJustifyElement() { 		 return new MFStringElement(new org.web3d.x3d.jsail.fields.MFString(delegate.getJustify()));
}
	public SFStringElement getLanguageElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getLanguage()));
}
	public SFBoolElement getLeftToRightElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getLeftToRight()));
}
	public SFNodeElement getMetadataElement() { 		 return new SFNodeElement(new X3DMetadataObjectElement(delegate.getMetadata()));
}
	public SFFloatElement getSizeElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getSize()));
}
	public SFFloatElement getSpacingElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getSpacing()));
}
	public SFStringElement getCssStyleElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getCssStyle()));
}
	public SFBoolElement getTopToBottomElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getTopToBottom()));
}
	public SFStringElement getDEFElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getDEF()));
}
	public SFStringElement getUSEElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getUSE()));
}
}
