package net.coderextreme.visitor;
public class NurbsSweptSurfaceElement extends org.web3d.x3d.jsail.NURBS.NurbsSweptSurface implements VisitableElement
{
	private org.web3d.x3d.jsail.NURBS.NurbsSweptSurface delegate = null;
	public NurbsSweptSurfaceElement(org.web3d.x3d.jsail.NURBS.NurbsSweptSurface delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getCcwElement().accept(v);
		getCrossSectionCurveElement().accept(v);
		getISElement().accept(v);
		getMetadataElement().accept(v);
		getSolidElement().accept(v);
		getTrajectoryCurveElement().accept(v);
		getDEFElement().accept(v);
		getUSEElement().accept(v);
		getCssClassElement().accept(v);
		getCssStyleElement().accept(v);
	}
	public SFBoolElement getCcwElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getCcw()));
}
	public SFNodeElement getCrossSectionCurveElement() { 		 return new SFNodeElement(new org.web3d.x3d.jsail.fields.SFNode(delegate.getCrossSectionCurve()));
}
	public SFNodeElement getISElement() { 		 return new SFNodeElement(new ISElement(delegate.getIS()));
}
	public SFNodeElement getMetadataElement() { 		 return new SFNodeElement(new X3DMetadataObjectElement(delegate.getMetadata()));
}
	public SFBoolElement getSolidElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getSolid()));
}
	public SFNodeElement getTrajectoryCurveElement() { 		 return new SFNodeElement(new org.web3d.x3d.jsail.fields.SFNode(delegate.getTrajectoryCurve()));
}
	public SFStringElement getDEFElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getDEF()));
}
	public SFStringElement getUSEElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getUSE()));
}
	public SFStringElement getCssClassElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getCssClass()));
}
	public SFStringElement getCssStyleElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getCssStyle()));
}
}
