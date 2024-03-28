package net.coderextreme.visitor;
public class SFMatrix3fElement extends org.web3d.x3d.jsail.fields.SFMatrix3f implements VisitableElement
{
	private org.web3d.x3d.jsail.fields.SFMatrix3f delegate = null;
	public SFMatrix3fElement(org.web3d.x3d.jsail.fields.SFMatrix3f delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);

	}
}
