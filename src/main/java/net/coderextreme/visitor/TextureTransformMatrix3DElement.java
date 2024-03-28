package net.coderextreme.visitor;
public class TextureTransformMatrix3DElement extends org.web3d.x3d.jsail.Texturing3D.TextureTransformMatrix3D implements VisitableElement
{
	private org.web3d.x3d.jsail.Texturing3D.TextureTransformMatrix3D delegate = null;
	public TextureTransformMatrix3DElement(org.web3d.x3d.jsail.Texturing3D.TextureTransformMatrix3D delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getISElement().accept(v);
		getMappingElement().accept(v);
		getMatrixElement().accept(v);
		getMetadataElement().accept(v);
		getDEFElement().accept(v);
		getUSEElement().accept(v);
		getCssClassElement().accept(v);
		getCssStyleElement().accept(v);
	}
	public SFNodeElement getISElement() { 		 return new SFNodeElement(new ISElement(delegate.getIS()));
}
	public SFStringElement getMappingElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getMapping()));
}
	public SFMatrix4fElement getMatrixElement() { 		 return new SFMatrix4fElement(new org.web3d.x3d.jsail.fields.SFMatrix4f(delegate.getMatrix()));
}
	public SFNodeElement getMetadataElement() { 		 return new SFNodeElement(new X3DMetadataObjectElement(delegate.getMetadata()));
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
