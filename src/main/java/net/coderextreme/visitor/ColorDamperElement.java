package net.coderextreme.visitor;
public class ColorDamperElement extends org.web3d.x3d.jsail.Followers.ColorDamper implements VisitableElement
{
	private org.web3d.x3d.jsail.Followers.ColorDamper delegate = null;
	public ColorDamperElement(org.web3d.x3d.jsail.Followers.ColorDamper delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getInitialDestinationElement().accept(v);
		getInitialValueElement().accept(v);
		getISElement().accept(v);
		getIsActiveElement().accept(v);
		getMetadataElement().accept(v);
		getOrderElement().accept(v);
		getTauElement().accept(v);
		getToleranceElement().accept(v);
		getValueElement().accept(v);
		getDEFElement().accept(v);
		getUSEElement().accept(v);
		getCssClassElement().accept(v);
		getCssStyleElement().accept(v);
	}
	public SFColorElement getInitialDestinationElement() { 		 return new SFColorElement(new org.web3d.x3d.jsail.fields.SFColor(delegate.getInitialDestination()));
}
	public SFColorElement getInitialValueElement() { 		 return new SFColorElement(new org.web3d.x3d.jsail.fields.SFColor(delegate.getInitialValue()));
}
	public SFNodeElement getISElement() { 		 return new SFNodeElement(new ISElement(delegate.getIS()));
}
	public SFBoolElement getIsActiveElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getIsActive()));
}
	public SFNodeElement getMetadataElement() { 		 return new SFNodeElement(new X3DMetadataObjectElement(delegate.getMetadata()));
}
	public SFInt32Element getOrderElement() { 		 return new SFInt32Element(new org.web3d.x3d.jsail.fields.SFInt32(delegate.getOrder()));
}
	public SFTimeElement getTauElement() { 		 return new SFTimeElement(new org.web3d.x3d.jsail.fields.SFTime(delegate.getTau()));
}
	public SFFloatElement getToleranceElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getTolerance()));
}
	public SFColorElement getValueElement() { 		 return new SFColorElement(new org.web3d.x3d.jsail.fields.SFColor(delegate.getValue()));
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
