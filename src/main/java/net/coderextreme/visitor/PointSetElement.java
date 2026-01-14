package net.coderextreme.visitor;
public class PointSetElement extends org.web3d.x3d.jsail.Rendering.PointSet implements VisitableElement
{
	private org.web3d.x3d.jsail.Rendering.PointSet delegate = null;
	public PointSetElement(org.web3d.x3d.jsail.Rendering.PointSet delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getAttribElement().accept(v);
		getColorElement().accept(v);
		getCoordElement().accept(v);
		getFogCoordElement().accept(v);
		getISElement().accept(v);
		getMetadataElement().accept(v);
		getNormalElement().accept(v);
		getDEFElement().accept(v);
		getUSEElement().accept(v);
		getCssClassElement().accept(v);
		getCssStyleElement().accept(v);
	}
	public MFNodeElement getAttribElement() { 		 return new MFNodeElement<attrib>(new org.web3d.x3d.jsail.fields.MFNode(delegate.getAttrib()));
}
	public SFNodeElement getColorElement() { 		 return new SFNodeElement(new org.web3d.x3d.jsail.fields.SFNode(delegate.getColor()));
}
	public SFNodeElement getCoordElement() { 		 return new SFNodeElement(new org.web3d.x3d.jsail.fields.SFNode(delegate.getCoord()));
}
	public SFNodeElement getFogCoordElement() { 		 return new SFNodeElement(new org.web3d.x3d.jsail.fields.SFNode(delegate.getFogCoord()));
}
	public SFNodeElement getISElement() { 		 return new SFNodeElement(new ISElement(delegate.getIS()));
}
	public SFNodeElement getMetadataElement() { 		 return new SFNodeElement(new X3DMetadataObjectElement(delegate.getMetadata()));
}
	public SFNodeElement getNormalElement() { 		 return new SFNodeElement(new org.web3d.x3d.jsail.fields.SFNode(delegate.getNormal()));
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
