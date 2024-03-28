package net.coderextreme.visitor;
public class X3DPickableObjectElement implements org.web3d.x3d.sai.Picking.X3DPickableObject ,  VisitableElement
{
	private org.web3d.x3d.sai.Picking.X3DPickableObject delegate = null;
	public X3DPickableObjectElement(org.web3d.x3d.sai.Picking.X3DPickableObject delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getPickableElement().accept(v);
	}
	public SFBoolElement getPickableElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getPickable()));
}
}
