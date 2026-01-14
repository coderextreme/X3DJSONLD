package net.coderextreme.visitor;
public class ConeElement extends org.web3d.x3d.jsail.Geometry3D.Cone implements VisitableElement
{
	private org.web3d.x3d.jsail.Geometry3D.Cone delegate = null;
	public ConeElement(org.web3d.x3d.jsail.Geometry3D.Cone delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getBottomElement().accept(v);
		getBottomRadiusElement().accept(v);
		getHeightElement().accept(v);
		getISElement().accept(v);
		getMetadataElement().accept(v);
		getSideElement().accept(v);
		getSolidElement().accept(v);
		getDEFElement().accept(v);
		getUSEElement().accept(v);
		getCssClassElement().accept(v);
		getCssStyleElement().accept(v);
	}
	public SFBoolElement getBottomElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getBottom()));
}
	public SFFloatElement getBottomRadiusElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getBottomRadius()));
}
	public SFFloatElement getHeightElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getHeight()));
}
	public SFNodeElement getISElement() { 		 return new SFNodeElement(new ISElement(delegate.getIS()));
}
	public SFNodeElement getMetadataElement() { 		 return new SFNodeElement(new X3DMetadataObjectElement(delegate.getMetadata()));
}
	public SFBoolElement getSideElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getSide()));
}
	public SFBoolElement getSolidElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getSolid()));
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
