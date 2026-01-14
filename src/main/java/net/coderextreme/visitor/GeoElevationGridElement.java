package net.coderextreme.visitor;
public class GeoElevationGridElement extends org.web3d.x3d.jsail.Geospatial.GeoElevationGrid implements VisitableElement
{
	private org.web3d.x3d.jsail.Geospatial.GeoElevationGrid delegate = null;
	public GeoElevationGridElement(org.web3d.x3d.jsail.Geospatial.GeoElevationGrid delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getCcwElement().accept(v);
		getColorElement().accept(v);
		getColorPerVertexElement().accept(v);
		getCreaseAngleElement().accept(v);
		getGeoGridOriginElement().accept(v);
		getGeoOriginElement().accept(v);
		getGeoSystemElement().accept(v);
		getHeightElement().accept(v);
		getISElement().accept(v);
		getMetadataElement().accept(v);
		getNormalElement().accept(v);
		getNormalPerVertexElement().accept(v);
		getSolidElement().accept(v);
		getTexCoordElement().accept(v);
		getXDimensionElement().accept(v);
		getXSpacingElement().accept(v);
		getYScaleElement().accept(v);
		getZDimensionElement().accept(v);
		getZSpacingElement().accept(v);
		getDEFElement().accept(v);
		getUSEElement().accept(v);
		getCssClassElement().accept(v);
		getCssStyleElement().accept(v);
	}
	public SFBoolElement getCcwElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getCcw()));
}
	public SFNodeElement getColorElement() { 		 return new SFNodeElement(new org.web3d.x3d.jsail.fields.SFNode(delegate.getColor()));
}
	public SFBoolElement getColorPerVertexElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getColorPerVertex()));
}
	public SFDoubleElement getCreaseAngleElement() { 		 return new SFDoubleElement(new org.web3d.x3d.jsail.fields.SFDouble(delegate.getCreaseAngle()));
}
	public SFVec3dElement getGeoGridOriginElement() { 		 return new SFVec3dElement(new org.web3d.x3d.jsail.fields.SFVec3d(delegate.getGeoGridOrigin()));
}
	public SFNodeElement getGeoOriginElement() { 		 return new SFNodeElement(new org.web3d.x3d.jsail.fields.SFNode(delegate.getGeoOrigin()));
}
	public MFStringElement getGeoSystemElement() { 		 return new MFStringElement(new org.web3d.x3d.jsail.fields.MFString(delegate.getGeoSystem()));
}
	public MFDoubleElement getHeightElement() { 		 return new MFDoubleElement(new org.web3d.x3d.jsail.fields.MFDouble(delegate.getHeight()));
}
	public SFNodeElement getISElement() { 		 return new SFNodeElement(new ISElement(delegate.getIS()));
}
	public SFNodeElement getMetadataElement() { 		 return new SFNodeElement(new X3DMetadataObjectElement(delegate.getMetadata()));
}
	public SFNodeElement getNormalElement() { 		 return new SFNodeElement(new org.web3d.x3d.jsail.fields.SFNode(delegate.getNormal()));
}
	public SFBoolElement getNormalPerVertexElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getNormalPerVertex()));
}
	public SFBoolElement getSolidElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getSolid()));
}
	public SFNodeElement getTexCoordElement() { 		 return new SFNodeElement(new org.web3d.x3d.jsail.fields.SFNode(delegate.getTexCoord()));
}
	public SFInt32Element getXDimensionElement() { 		 return new SFInt32Element(new org.web3d.x3d.jsail.fields.SFInt32(delegate.getXDimension()));
}
	public SFDoubleElement getXSpacingElement() { 		 return new SFDoubleElement(new org.web3d.x3d.jsail.fields.SFDouble(delegate.getXSpacing()));
}
	public SFFloatElement getYScaleElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getYScale()));
}
	public SFInt32Element getZDimensionElement() { 		 return new SFInt32Element(new org.web3d.x3d.jsail.fields.SFInt32(delegate.getZDimension()));
}
	public SFDoubleElement getZSpacingElement() { 		 return new SFDoubleElement(new org.web3d.x3d.jsail.fields.SFDouble(delegate.getZSpacing()));
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
