package net.coderextreme.visitor;
public class GeoLODElement extends org.web3d.x3d.jsail.Geospatial.GeoLOD implements VisitableElement
{
	private org.web3d.x3d.jsail.Geospatial.GeoLOD delegate = null;
	public GeoLODElement(org.web3d.x3d.jsail.Geospatial.GeoLOD delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getBboxCenterElement().accept(v);
		getBboxDisplayElement().accept(v);
		getBboxSizeElement().accept(v);
		getCenterElement().accept(v);
		getChild1UrlElement().accept(v);
		getChild2UrlElement().accept(v);
		getChild3UrlElement().accept(v);
		getChild4UrlElement().accept(v);
		getChildrenElement().accept(v);
		getGeoOriginElement().accept(v);
		getGeoSystemElement().accept(v);
		getISElement().accept(v);
		getLevelElement().accept(v);
		getMetadataElement().accept(v);
		getRangeElement().accept(v);
		getRootNodeElement().accept(v);
		getRootUrlElement().accept(v);
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
	public SFVec3dElement getCenterElement() { 		 return new SFVec3dElement(new org.web3d.x3d.jsail.fields.SFVec3d(delegate.getCenter()));
}
	public MFStringElement getChild1UrlElement() { 		 return new MFStringElement(new org.web3d.x3d.jsail.fields.MFString(delegate.getChild1Url()));
}
	public MFStringElement getChild2UrlElement() { 		 return new MFStringElement(new org.web3d.x3d.jsail.fields.MFString(delegate.getChild2Url()));
}
	public MFStringElement getChild3UrlElement() { 		 return new MFStringElement(new org.web3d.x3d.jsail.fields.MFString(delegate.getChild3Url()));
}
	public MFStringElement getChild4UrlElement() { 		 return new MFStringElement(new org.web3d.x3d.jsail.fields.MFString(delegate.getChild4Url()));
}
	public MFNodeElement getChildrenElement() { 		 return new MFNodeElement(delegate.getChildren());
}
	public SFNodeElement getGeoOriginElement() { 		 return new SFNodeElement(new org.web3d.x3d.jsail.fields.SFNode(delegate.getGeoOrigin()));
}
	public MFStringElement getGeoSystemElement() { 		 return new MFStringElement(new org.web3d.x3d.jsail.fields.MFString(delegate.getGeoSystem()));
}
	public SFNodeElement getISElement() { 		 return new SFNodeElement(new ISElement(delegate.getIS()));
}
	public SFInt32Element getLevelElement() { 		 return new SFInt32Element(new org.web3d.x3d.jsail.fields.SFInt32(delegate.getLevel()));
}
	public SFNodeElement getMetadataElement() { 		 return new SFNodeElement(new X3DMetadataObjectElement(delegate.getMetadata()));
}
	public SFFloatElement getRangeElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getRange()));
}
	public MFNodeElement getRootNodeElement() { 		 return new MFNodeElement<rootNode>(new org.web3d.x3d.jsail.fields.MFNode(delegate.getRootNode()));
}
	public MFStringElement getRootUrlElement() { 		 return new MFStringElement(new org.web3d.x3d.jsail.fields.MFString(delegate.getRootUrl()));
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
