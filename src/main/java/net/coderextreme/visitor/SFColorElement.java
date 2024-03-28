package net.coderextreme.visitor;
public class SFColorElement extends org.web3d.x3d.jsail.fields.SFColor implements VisitableElement
{
	private org.web3d.x3d.jsail.fields.SFColor delegate = null;
	public SFColorElement(org.web3d.x3d.jsail.fields.SFColor delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);

	}
}
