package net.coderextreme.visitor;
public class FillPropertiesElement extends org.web3d.x3d.jsail.Shape.FillProperties implements VisitableElement
{
	private org.web3d.x3d.jsail.Shape.FillProperties delegate = null;
	public FillPropertiesElement(org.web3d.x3d.jsail.Shape.FillProperties delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getFilledElement().accept(v);
		getHatchColorElement().accept(v);
		getHatchedElement().accept(v);
		getHatchStyleElement().accept(v);
		getISElement().accept(v);
		getMetadataElement().accept(v);
		getDEFElement().accept(v);
		getUSEElement().accept(v);
		getCssClassElement().accept(v);
		getCssStyleElement().accept(v);
	}
	public SFBoolElement getFilledElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getFilled()));
}
	public SFColorElement getHatchColorElement() { 		 return new SFColorElement(new org.web3d.x3d.jsail.fields.SFColor(delegate.getHatchColor()));
}
	public SFBoolElement getHatchedElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getHatched()));
}
	public SFInt32Element getHatchStyleElement() { 		 return new SFInt32Element(new org.web3d.x3d.jsail.fields.SFInt32(delegate.getHatchStyle()));
}
	public SFNodeElement getISElement() { 		 return new SFNodeElement(new ISElement(delegate.getIS()));
}
	public SFNodeElement getMetadataElement() { 		 return new SFNodeElement(new X3DMetadataObjectElement(delegate.getMetadata()));
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
