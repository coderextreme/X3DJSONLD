package net.coderextreme.visitor;
public class SFTimeElement extends org.web3d.x3d.jsail.fields.SFTime implements VisitableElement
{
	private org.web3d.x3d.jsail.fields.SFTime delegate = null;
	public SFTimeElement(org.web3d.x3d.jsail.fields.SFTime delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);

	}
}
