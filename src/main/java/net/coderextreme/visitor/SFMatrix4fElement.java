package net.coderextreme.visitor;
public class SFMatrix4fElement extends org.web3d.x3d.jsail.fields.SFMatrix4f implements VisitableElement
{
	private org.web3d.x3d.jsail.fields.SFMatrix4f delegate = null;
	public SFMatrix4fElement(org.web3d.x3d.jsail.fields.SFMatrix4f delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);

	}
}
