package net.coderextreme.visitor;
public class TextElement extends org.web3d.x3d.jsail.Text.Text implements VisitableElement
{
	private org.web3d.x3d.jsail.Text.Text delegate = null;
	public TextElement(org.web3d.x3d.jsail.Text.Text delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getFontStyleElement().accept(v);
		getISElement().accept(v);
		getLengthElement().accept(v);
		getLineBoundsElement().accept(v);
		getMaxExtentElement().accept(v);
		getMetadataElement().accept(v);
		getOriginElement().accept(v);
		getSolidElement().accept(v);
		getStringElement().accept(v);
		getTextBoundsElement().accept(v);
		getDEFElement().accept(v);
		getUSEElement().accept(v);
		getCssClassElement().accept(v);
		getCssStyleElement().accept(v);
	}
	public SFNodeElement getFontStyleElement() { 		 return new SFNodeElement(new org.web3d.x3d.jsail.fields.SFNode(delegate.getFontStyle()));
}
	public SFNodeElement getISElement() { 		 return new SFNodeElement(new ISElement(delegate.getIS()));
}
	public MFFloatElement getLengthElement() { 		 return new MFFloatElement(new org.web3d.x3d.jsail.fields.MFFloat(delegate.getLength()));
}
	public MFVec2fElement getLineBoundsElement() { 		 return new MFVec2fElement(new org.web3d.x3d.jsail.fields.MFVec2f(delegate.getLineBounds()));
}
	public SFFloatElement getMaxExtentElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getMaxExtent()));
}
	public SFNodeElement getMetadataElement() { 		 return new SFNodeElement(new X3DMetadataObjectElement(delegate.getMetadata()));
}
	public SFVec3fElement getOriginElement() { 		 return new SFVec3fElement(new org.web3d.x3d.jsail.fields.SFVec3f(delegate.getOrigin()));
}
	public SFBoolElement getSolidElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getSolid()));
}
	public MFStringElement getStringElement() { 		 return new MFStringElement(new org.web3d.x3d.jsail.fields.MFString(delegate.getString()));
}
	public SFVec2fElement getTextBoundsElement() { 		 return new SFVec2fElement(new org.web3d.x3d.jsail.fields.SFVec2f(delegate.getTextBounds()));
}
	public SFStringElement getDEFElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getDEF()));
}
	public SFStringElement getUSEElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getUSE()));
}
	public SFStringElement getCssClassElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getCssClass()));
}
	public SFStringElement getCssStyleElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getCssStyle()));
}
}
