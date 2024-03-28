package net.coderextreme.visitor;
public class ProtoInterfaceElement extends org.web3d.x3d.jsail.Core.ProtoInterface implements VisitableElement
{
	private org.web3d.x3d.jsail.Core.ProtoInterface delegate = null;
	public ProtoInterfaceElement(org.web3d.x3d.jsail.Core.ProtoInterface delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getCssClassElement().accept(v);
		getFieldElement().accept(v);
		getCssStyleElement().accept(v);
	}
	public SFStringElement getCssClassElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getCssClass()));
}
	public MFNodeElement getFieldElement() { 		 return new MFNodeElement(delegate.getField());
}
	public SFStringElement getCssStyleElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getCssStyle()));
}
}
