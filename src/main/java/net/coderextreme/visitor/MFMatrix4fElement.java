package net.coderextreme.visitor;
public class MFMatrix4fElement extends org.web3d.x3d.jsail.fields.MFMatrix4f implements VisitableElement
{
	private org.web3d.x3d.jsail.fields.MFMatrix4f delegate = null;
	public MFMatrix4fElement(org.web3d.x3d.jsail.fields.MFMatrix4f delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);

	}
}
