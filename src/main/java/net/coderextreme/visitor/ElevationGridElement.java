package net.coderextreme.visitor;
public class ElevationGridElement extends org.web3d.x3d.jsail.Geometry3D.ElevationGrid implements VisitableElement
{
	private org.web3d.x3d.jsail.Geometry3D.ElevationGrid delegate = null;
	public ElevationGridElement(org.web3d.x3d.jsail.Geometry3D.ElevationGrid delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getAttribElement().accept(v);
		getCcwElement().accept(v);
		getColorElement().accept(v);
		getColorPerVertexElement().accept(v);
		getCreaseAngleElement().accept(v);
		getFogCoordElement().accept(v);
		getHeightElement().accept(v);
		getISElement().accept(v);
		getMetadataElement().accept(v);
		getNormalElement().accept(v);
		getNormalPerVertexElement().accept(v);
		getSolidElement().accept(v);
		getTexCoordElement().accept(v);
		getXDimensionElement().accept(v);
		getXSpacingElement().accept(v);
		getZDimensionElement().accept(v);
		getZSpacingElement().accept(v);
		getDEFElement().accept(v);
		getUSEElement().accept(v);
		getCssClassElement().accept(v);
		getCssStyleElement().accept(v);
	}
	public MFNodeElement getAttribElement() { 		 return new MFNodeElement<attrib>(new org.web3d.x3d.jsail.fields.MFNode(delegate.getAttrib()));
}
	public SFBoolElement getCcwElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getCcw()));
}
	public SFNodeElement getColorElement() { 		 return new SFNodeElement(new org.web3d.x3d.jsail.fields.SFNode(delegate.getColor()));
}
	public SFBoolElement getColorPerVertexElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getColorPerVertex()));
}
	public SFFloatElement getCreaseAngleElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getCreaseAngle()));
}
	public SFNodeElement getFogCoordElement() { 		 return new SFNodeElement(new org.web3d.x3d.jsail.fields.SFNode(delegate.getFogCoord()));
}
	public MFFloatElement getHeightElement() { 		 return new MFFloatElement(new org.web3d.x3d.jsail.fields.MFFloat(delegate.getHeight()));
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
	public SFFloatElement getXSpacingElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getXSpacing()));
}
	public SFInt32Element getZDimensionElement() { 		 return new SFInt32Element(new org.web3d.x3d.jsail.fields.SFInt32(delegate.getZDimension()));
}
	public SFFloatElement getZSpacingElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getZSpacing()));
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
