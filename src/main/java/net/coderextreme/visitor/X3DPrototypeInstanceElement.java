package net.coderextreme.visitor;
public class X3DPrototypeInstanceElement implements org.web3d.x3d.sai.Core.X3DPrototypeInstance ,  VisitableElement
{
	private org.web3d.x3d.sai.Core.X3DPrototypeInstance delegate = null;
	public X3DPrototypeInstanceElement(org.web3d.x3d.sai.Core.X3DPrototypeInstance delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getISElement().accept(v);
		getMetadataElement().accept(v);
	}
	public SFNodeElement getISElement() { 		 return new SFNodeElement(new ISElement(delegate.getIS()));
}
	public SFNodeElement getMetadataElement() { 		 return new SFNodeElement(new X3DMetadataObjectElement(delegate.getMetadata()));
}
}
