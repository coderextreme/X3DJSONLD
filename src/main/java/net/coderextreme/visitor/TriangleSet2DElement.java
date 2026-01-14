package net.coderextreme.visitor;
public class TriangleSet2DElement extends org.web3d.x3d.jsail.Geometry2D.TriangleSet2D implements VisitableElement
{
	private org.web3d.x3d.jsail.Geometry2D.TriangleSet2D delegate = null;
	public TriangleSet2DElement(org.web3d.x3d.jsail.Geometry2D.TriangleSet2D delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getISElement().accept(v);
		getMetadataElement().accept(v);
		getSolidElement().accept(v);
		getVerticesElement().accept(v);
		getDEFElement().accept(v);
		getUSEElement().accept(v);
		getCssClassElement().accept(v);
		getCssStyleElement().accept(v);
	}
	public SFNodeElement getISElement() { 		 return new SFNodeElement(new ISElement(delegate.getIS()));
}
	public SFNodeElement getMetadataElement() { 		 return new SFNodeElement(new X3DMetadataObjectElement(delegate.getMetadata()));
}
	public SFBoolElement getSolidElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getSolid()));
}
	public MFVec2fElement getVerticesElement() { 		 return new MFVec2fElement(new org.web3d.x3d.jsail.fields.MFVec2f(delegate.getVertices()));
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
