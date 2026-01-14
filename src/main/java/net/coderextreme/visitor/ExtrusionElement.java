package net.coderextreme.visitor;
public class ExtrusionElement extends org.web3d.x3d.jsail.Geometry3D.Extrusion implements VisitableElement
{
	private org.web3d.x3d.jsail.Geometry3D.Extrusion delegate = null;
	public ExtrusionElement(org.web3d.x3d.jsail.Geometry3D.Extrusion delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getBeginCapElement().accept(v);
		getCcwElement().accept(v);
		getConvexElement().accept(v);
		getCreaseAngleElement().accept(v);
		getCrossSectionElement().accept(v);
		getEndCapElement().accept(v);
		getISElement().accept(v);
		getMetadataElement().accept(v);
		getOrientationElement().accept(v);
		getScaleElement().accept(v);
		getSolidElement().accept(v);
		getSpineElement().accept(v);
		getDEFElement().accept(v);
		getUSEElement().accept(v);
		getCssClassElement().accept(v);
		getCssStyleElement().accept(v);
	}
	public SFBoolElement getBeginCapElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getBeginCap()));
}
	public SFBoolElement getCcwElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getCcw()));
}
	public SFBoolElement getConvexElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getConvex()));
}
	public SFFloatElement getCreaseAngleElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getCreaseAngle()));
}
	public MFVec2fElement getCrossSectionElement() { 		 return new MFVec2fElement(new org.web3d.x3d.jsail.fields.MFVec2f(delegate.getCrossSection()));
}
	public SFBoolElement getEndCapElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getEndCap()));
}
	public SFNodeElement getISElement() { 		 return new SFNodeElement(new ISElement(delegate.getIS()));
}
	public SFNodeElement getMetadataElement() { 		 return new SFNodeElement(new X3DMetadataObjectElement(delegate.getMetadata()));
}
	public MFRotationElement getOrientationElement() { 		 return new MFRotationElement(new org.web3d.x3d.jsail.fields.MFRotation(delegate.getOrientation()));
}
	public MFVec2fElement getScaleElement() { 		 return new MFVec2fElement(new org.web3d.x3d.jsail.fields.MFVec2f(delegate.getScale()));
}
	public SFBoolElement getSolidElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getSolid()));
}
	public MFVec3fElement getSpineElement() { 		 return new MFVec3fElement(new org.web3d.x3d.jsail.fields.MFVec3f(delegate.getSpine()));
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
