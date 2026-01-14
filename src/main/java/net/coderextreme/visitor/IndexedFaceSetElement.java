package net.coderextreme.visitor;
public class IndexedFaceSetElement extends org.web3d.x3d.jsail.Geometry3D.IndexedFaceSet implements VisitableElement
{
	private org.web3d.x3d.jsail.Geometry3D.IndexedFaceSet delegate = null;
	public IndexedFaceSetElement(org.web3d.x3d.jsail.Geometry3D.IndexedFaceSet delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getAttribElement().accept(v);
		getCcwElement().accept(v);
		getColorElement().accept(v);
		getColorIndexElement().accept(v);
		getColorPerVertexElement().accept(v);
		getConvexElement().accept(v);
		getCoordElement().accept(v);
		getCoordIndexElement().accept(v);
		getCreaseAngleElement().accept(v);
		getFogCoordElement().accept(v);
		getISElement().accept(v);
		getMetadataElement().accept(v);
		getNormalElement().accept(v);
		getNormalIndexElement().accept(v);
		getNormalPerVertexElement().accept(v);
		getSolidElement().accept(v);
		getTexCoordElement().accept(v);
		getTexCoordIndexElement().accept(v);
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
	public MFInt32Element getColorIndexElement() { 		 return new MFInt32Element(new org.web3d.x3d.jsail.fields.MFInt32(delegate.getColorIndex()));
}
	public SFBoolElement getColorPerVertexElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getColorPerVertex()));
}
	public SFBoolElement getConvexElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getConvex()));
}
	public SFNodeElement getCoordElement() { 		 return new SFNodeElement(new org.web3d.x3d.jsail.fields.SFNode(delegate.getCoord()));
}
	public MFInt32Element getCoordIndexElement() { 		 return new MFInt32Element(new org.web3d.x3d.jsail.fields.MFInt32(delegate.getCoordIndex()));
}
	public SFFloatElement getCreaseAngleElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getCreaseAngle()));
}
	public SFNodeElement getFogCoordElement() { 		 return new SFNodeElement(new org.web3d.x3d.jsail.fields.SFNode(delegate.getFogCoord()));
}
	public SFNodeElement getISElement() { 		 return new SFNodeElement(new ISElement(delegate.getIS()));
}
	public SFNodeElement getMetadataElement() { 		 return new SFNodeElement(new X3DMetadataObjectElement(delegate.getMetadata()));
}
	public SFNodeElement getNormalElement() { 		 return new SFNodeElement(new org.web3d.x3d.jsail.fields.SFNode(delegate.getNormal()));
}
	public MFInt32Element getNormalIndexElement() { 		 return new MFInt32Element(new org.web3d.x3d.jsail.fields.MFInt32(delegate.getNormalIndex()));
}
	public SFBoolElement getNormalPerVertexElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getNormalPerVertex()));
}
	public SFBoolElement getSolidElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getSolid()));
}
	public SFNodeElement getTexCoordElement() { 		 return new SFNodeElement(new org.web3d.x3d.jsail.fields.SFNode(delegate.getTexCoord()));
}
	public MFInt32Element getTexCoordIndexElement() { 		 return new MFInt32Element(new org.web3d.x3d.jsail.fields.MFInt32(delegate.getTexCoordIndex()));
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
