package net.coderextreme.visitor;
public class X3DBackgroundNodeElement implements org.web3d.x3d.sai.EnvironmentalEffects.X3DBackgroundNode ,  VisitableElement
{
	private org.web3d.x3d.sai.EnvironmentalEffects.X3DBackgroundNode delegate = null;
	public X3DBackgroundNodeElement(org.web3d.x3d.sai.EnvironmentalEffects.X3DBackgroundNode delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getBindTimeElement().accept(v);
		getGroundAngleElement().accept(v);
		getGroundColorElement().accept(v);
		getISElement().accept(v);
		getIsBoundElement().accept(v);
		getMetadataElement().accept(v);
		getSkyAngleElement().accept(v);
		getSkyColorElement().accept(v);
		getTransparencyElement().accept(v);
		getDEFElement().accept(v);
		getUSEElement().accept(v);
		getCssClassElement().accept(v);
		getCssStyleElement().accept(v);
	}
	public SFTimeElement getBindTimeElement() { 		 return new SFTimeElement(new org.web3d.x3d.jsail.fields.SFTime(delegate.getBindTime()));
}
	public MFFloatElement getGroundAngleElement() { 		 return new MFFloatElement(new org.web3d.x3d.jsail.fields.MFFloat(delegate.getGroundAngle()));
}
	public MFColorElement getGroundColorElement() { 		 return new MFColorElement(new org.web3d.x3d.jsail.fields.MFColor(delegate.getGroundColor()));
}
	public SFNodeElement getISElement() { 		 return new SFNodeElement(new ISElement(delegate.getIS()));
}
	public SFBoolElement getIsBoundElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getIsBound()));
}
	public SFNodeElement getMetadataElement() { 		 return new SFNodeElement(new X3DMetadataObjectElement(delegate.getMetadata()));
}
	public MFFloatElement getSkyAngleElement() { 		 return new MFFloatElement(new org.web3d.x3d.jsail.fields.MFFloat(delegate.getSkyAngle()));
}
	public MFColorElement getSkyColorElement() { 		 return new MFColorElement(new org.web3d.x3d.jsail.fields.MFColor(delegate.getSkyColor()));
}
	public SFFloatElement getTransparencyElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getTransparency()));
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
