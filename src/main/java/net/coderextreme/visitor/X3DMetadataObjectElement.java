package net.coderextreme.visitor;
public class X3DMetadataObjectElement implements org.web3d.x3d.sai.Core.X3DMetadataObject ,  VisitableElement
{
	private org.web3d.x3d.sai.Core.X3DMetadataObject delegate = null;
	public X3DMetadataObjectElement(org.web3d.x3d.sai.Core.X3DMetadataObject delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getNameElement().accept(v);
		getReferenceElement().accept(v);
	}
	public SFStringElement getNameElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getName()));
}
	public SFStringElement getReferenceElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getReference()));
}
}
