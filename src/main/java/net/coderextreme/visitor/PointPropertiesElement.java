package net.coderextreme.visitor;
public class PointPropertiesElement extends org.web3d.x3d.jsail.Shape.PointProperties implements VisitableElement
{
	private org.web3d.x3d.jsail.Shape.PointProperties delegate = null;
	public PointPropertiesElement(org.web3d.x3d.jsail.Shape.PointProperties delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getAttenuationElement().accept(v);
		getISElement().accept(v);
		getMetadataElement().accept(v);
		getPointSizeMaxValueElement().accept(v);
		getPointSizeMinValueElement().accept(v);
		getPointSizeScaleFactorElement().accept(v);
		getDEFElement().accept(v);
		getUSEElement().accept(v);
		getCssClassElement().accept(v);
		getCssStyleElement().accept(v);
	}
	public SFVec3fElement getAttenuationElement() { 		 return new SFVec3fElement(new org.web3d.x3d.jsail.fields.SFVec3f(delegate.getAttenuation()));
}
	public SFNodeElement getISElement() { 		 return new SFNodeElement(new ISElement(delegate.getIS()));
}
	public SFNodeElement getMetadataElement() { 		 return new SFNodeElement(new X3DMetadataObjectElement(delegate.getMetadata()));
}
	public SFFloatElement getPointSizeMaxValueElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getPointSizeMaxValue()));
}
	public SFFloatElement getPointSizeMinValueElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getPointSizeMinValue()));
}
	public SFFloatElement getPointSizeScaleFactorElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getPointSizeScaleFactor()));
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
