package net.coderextreme.visitor;
public class MFNodeElement<P extends Object> extends org.web3d.x3d.jsail.fields.MFNode implements VisitableElement
{
	private org.web3d.x3d.jsail.fields.MFNode delegate = null;
	public MFNodeElement<P>(org.web3d.x3d.jsail.fields.MFNode delegate) {
		this.delegate = delegate;
	}
	public MFNodeElement<P>(P[] delegate) {
		this.delegate = new org.web3d.x3d.jsail.fields.MFNode(delegate);
	}
	public MFNodeElement<P>(java.util.ArrayList<P> delegate) {
		this.delegate = new org.web3d.x3d.jsail.fields.MFNode(delegate.toArray(new P[0]));
	}
	public void accept(Visitor v) {
		v.visit(this);

	}
}
