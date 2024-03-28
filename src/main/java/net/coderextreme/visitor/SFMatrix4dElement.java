package net.coderextreme.visitor;
public class SFMatrix4dElement extends org.web3d.x3d.jsail.fields.SFMatrix4d implements VisitableElement
{
	private org.web3d.x3d.jsail.fields.SFMatrix4d delegate = null;
	public SFMatrix4dElement(org.web3d.x3d.jsail.fields.SFMatrix4d delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);

	}
}
