package net.coderextreme.visitor;
public class GeoTouchSensorElement extends org.web3d.x3d.jsail.Geospatial.GeoTouchSensor implements VisitableElement
{
	private org.web3d.x3d.jsail.Geospatial.GeoTouchSensor delegate = null;
	public GeoTouchSensorElement(org.web3d.x3d.jsail.Geospatial.GeoTouchSensor delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getDescriptionElement().accept(v);
		getEnabledElement().accept(v);
		getGeoOriginElement().accept(v);
		getGeoSystemElement().accept(v);
		getHitGeoCoordElement().accept(v);
		getHitNormalElement().accept(v);
		getHitPointElement().accept(v);
		getHitTexCoordElement().accept(v);
		getISElement().accept(v);
		getIsActiveElement().accept(v);
		getIsOverElement().accept(v);
		getMetadataElement().accept(v);
		getTouchTimeElement().accept(v);
		getDEFElement().accept(v);
		getUSEElement().accept(v);
		getCssClassElement().accept(v);
		getCssStyleElement().accept(v);
	}
	public SFStringElement getDescriptionElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getDescription()));
}
	public SFBoolElement getEnabledElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getEnabled()));
}
	public SFNodeElement getGeoOriginElement() { 		 return new SFNodeElement(new org.web3d.x3d.jsail.fields.SFNode(delegate.getGeoOrigin()));
}
	public MFStringElement getGeoSystemElement() { 		 return new MFStringElement(new org.web3d.x3d.jsail.fields.MFString(delegate.getGeoSystem()));
}
	public SFVec3dElement getHitGeoCoordElement() { 		 return new SFVec3dElement(new org.web3d.x3d.jsail.fields.SFVec3d(delegate.getHitGeoCoord()));
}
	public SFVec3fElement getHitNormalElement() { 		 return new SFVec3fElement(new org.web3d.x3d.jsail.fields.SFVec3f(delegate.getHitNormal()));
}
	public SFVec3fElement getHitPointElement() { 		 return new SFVec3fElement(new org.web3d.x3d.jsail.fields.SFVec3f(delegate.getHitPoint()));
}
	public SFVec2fElement getHitTexCoordElement() { 		 return new SFVec2fElement(new org.web3d.x3d.jsail.fields.SFVec2f(delegate.getHitTexCoord()));
}
	public SFNodeElement getISElement() { 		 return new SFNodeElement(new ISElement(delegate.getIS()));
}
	public SFBoolElement getIsActiveElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getIsActive()));
}
	public SFBoolElement getIsOverElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getIsOver()));
}
	public SFNodeElement getMetadataElement() { 		 return new SFNodeElement(new X3DMetadataObjectElement(delegate.getMetadata()));
}
	public SFTimeElement getTouchTimeElement() { 		 return new SFTimeElement(new org.web3d.x3d.jsail.fields.SFTime(delegate.getTouchTime()));
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
