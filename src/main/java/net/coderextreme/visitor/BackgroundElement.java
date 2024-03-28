package net.coderextreme.visitor;
public class BackgroundElement extends org.web3d.x3d.jsail.EnvironmentalEffects.Background implements VisitableElement
{
	private org.web3d.x3d.jsail.EnvironmentalEffects.Background delegate = null;
	public BackgroundElement(org.web3d.x3d.jsail.EnvironmentalEffects.Background delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getBackUrlElement().accept(v);
		getBindTimeElement().accept(v);
		getBottomUrlElement().accept(v);
		getFrontUrlElement().accept(v);
		getGroundAngleElement().accept(v);
		getGroundColorElement().accept(v);
		getISElement().accept(v);
		getIsBoundElement().accept(v);
		getLeftUrlElement().accept(v);
		getMetadataElement().accept(v);
		getRightUrlElement().accept(v);
		getSkyAngleElement().accept(v);
		getSkyColorElement().accept(v);
		getTopUrlElement().accept(v);
		getTransparencyElement().accept(v);
		getDEFElement().accept(v);
		getUSEElement().accept(v);
		getCssClassElement().accept(v);
		getCssStyleElement().accept(v);
	}
	public MFStringElement getBackUrlElement() { 		 return new MFStringElement(new org.web3d.x3d.jsail.fields.MFString(delegate.getBackUrl()));
}
	public SFTimeElement getBindTimeElement() { 		 return new SFTimeElement(new org.web3d.x3d.jsail.fields.SFTime(delegate.getBindTime()));
}
	public MFStringElement getBottomUrlElement() { 		 return new MFStringElement(new org.web3d.x3d.jsail.fields.MFString(delegate.getBottomUrl()));
}
	public MFStringElement getFrontUrlElement() { 		 return new MFStringElement(new org.web3d.x3d.jsail.fields.MFString(delegate.getFrontUrl()));
}
	public MFFloatElement getGroundAngleElement() { 		 return new MFFloatElement(new org.web3d.x3d.jsail.fields.MFFloat(delegate.getGroundAngle()));
}
	public MFColorElement getGroundColorElement() { 		 return new MFColorElement(new org.web3d.x3d.jsail.fields.MFColor(delegate.getGroundColor()));
}
	public SFNodeElement getISElement() { 		 return new SFNodeElement(new ISElement(delegate.getIS()));
}
	public SFBoolElement getIsBoundElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getIsBound()));
}
	public MFStringElement getLeftUrlElement() { 		 return new MFStringElement(new org.web3d.x3d.jsail.fields.MFString(delegate.getLeftUrl()));
}
	public SFNodeElement getMetadataElement() { 		 return new SFNodeElement(new X3DMetadataObjectElement(delegate.getMetadata()));
}
	public MFStringElement getRightUrlElement() { 		 return new MFStringElement(new org.web3d.x3d.jsail.fields.MFString(delegate.getRightUrl()));
}
	public MFFloatElement getSkyAngleElement() { 		 return new MFFloatElement(new org.web3d.x3d.jsail.fields.MFFloat(delegate.getSkyAngle()));
}
	public MFColorElement getSkyColorElement() { 		 return new MFColorElement(new org.web3d.x3d.jsail.fields.MFColor(delegate.getSkyColor()));
}
	public MFStringElement getTopUrlElement() { 		 return new MFStringElement(new org.web3d.x3d.jsail.fields.MFString(delegate.getTopUrl()));
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
