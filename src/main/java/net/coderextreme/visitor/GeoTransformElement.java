package net.coderextreme.visitor;
public class GeoTransformElement extends org.web3d.x3d.jsail.Geospatial.GeoTransform implements VisitableElement
{
	private org.web3d.x3d.jsail.Geospatial.GeoTransform delegate = null;
	public GeoTransformElement(org.web3d.x3d.jsail.Geospatial.GeoTransform delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getBboxCenterElement().accept(v);
		getBboxDisplayElement().accept(v);
		getBboxSizeElement().accept(v);
		getChildrenElement().accept(v);
		getGeoCenterElement().accept(v);
		getGeoOriginElement().accept(v);
		getGeoSystemElement().accept(v);
		getISElement().accept(v);
		getMetadataElement().accept(v);
		getRotationElement().accept(v);
		getScaleElement().accept(v);
		getScaleOrientationElement().accept(v);
		getTranslationElement().accept(v);
		getVisibleElement().accept(v);
		getDEFElement().accept(v);
		getUSEElement().accept(v);
		getCssClassElement().accept(v);
		getCssStyleElement().accept(v);
	}
	public SFVec3fElement getBboxCenterElement() { 		 return new SFVec3fElement(new org.web3d.x3d.jsail.fields.SFVec3f(delegate.getBboxCenter()));
}
	public SFBoolElement getBboxDisplayElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getBboxDisplay()));
}
	public SFVec3fElement getBboxSizeElement() { 		 return new SFVec3fElement(new org.web3d.x3d.jsail.fields.SFVec3f(delegate.getBboxSize()));
}
	public MFNodeElement getChildrenElement() { 		 return new MFNodeElement(delegate.getChildren());
}
	public SFVec3dElement getGeoCenterElement() { 		 return new SFVec3dElement(new org.web3d.x3d.jsail.fields.SFVec3d(delegate.getGeoCenter()));
}
	public SFNodeElement getGeoOriginElement() { 		 return new SFNodeElement(new org.web3d.x3d.jsail.fields.SFNode(delegate.getGeoOrigin()));
}
	public MFStringElement getGeoSystemElement() { 		 return new MFStringElement(new org.web3d.x3d.jsail.fields.MFString(delegate.getGeoSystem()));
}
	public SFNodeElement getISElement() { 		 return new SFNodeElement(new ISElement(delegate.getIS()));
}
	public SFNodeElement getMetadataElement() { 		 return new SFNodeElement(new X3DMetadataObjectElement(delegate.getMetadata()));
}
	public SFRotationElement getRotationElement() { 		 return new SFRotationElement(new org.web3d.x3d.jsail.fields.SFRotation(delegate.getRotation()));
}
	public SFVec3fElement getScaleElement() { 		 return new SFVec3fElement(new org.web3d.x3d.jsail.fields.SFVec3f(delegate.getScale()));
}
	public SFRotationElement getScaleOrientationElement() { 		 return new SFRotationElement(new org.web3d.x3d.jsail.fields.SFRotation(delegate.getScaleOrientation()));
}
	public SFVec3fElement getTranslationElement() { 		 return new SFVec3fElement(new org.web3d.x3d.jsail.fields.SFVec3f(delegate.getTranslation()));
}
	public SFBoolElement getVisibleElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getVisible()));
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
