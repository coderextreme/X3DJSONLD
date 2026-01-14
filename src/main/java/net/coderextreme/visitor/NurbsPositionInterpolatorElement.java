package net.coderextreme.visitor;
public class NurbsPositionInterpolatorElement extends org.web3d.x3d.jsail.NURBS.NurbsPositionInterpolator implements VisitableElement
{
	private org.web3d.x3d.jsail.NURBS.NurbsPositionInterpolator delegate = null;
	public NurbsPositionInterpolatorElement(org.web3d.x3d.jsail.NURBS.NurbsPositionInterpolator delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getControlPointElement().accept(v);
		getISElement().accept(v);
		getKnotElement().accept(v);
		getMetadataElement().accept(v);
		getOrderElement().accept(v);
		getValueElement().accept(v);
		getWeightElement().accept(v);
		getDEFElement().accept(v);
		getUSEElement().accept(v);
		getCssClassElement().accept(v);
		getCssStyleElement().accept(v);
	}
	public SFNodeElement getControlPointElement() { 		 return new SFNodeElement(new org.web3d.x3d.jsail.fields.SFNode(delegate.getControlPoint()));
}
	public SFNodeElement getISElement() { 		 return new SFNodeElement(new ISElement(delegate.getIS()));
}
	public MFDoubleElement getKnotElement() { 		 return new MFDoubleElement(new org.web3d.x3d.jsail.fields.MFDouble(delegate.getKnot()));
}
	public SFNodeElement getMetadataElement() { 		 return new SFNodeElement(new X3DMetadataObjectElement(delegate.getMetadata()));
}
	public SFInt32Element getOrderElement() { 		 return new SFInt32Element(new org.web3d.x3d.jsail.fields.SFInt32(delegate.getOrder()));
}
	public SFVec3fElement getValueElement() { 		 return new SFVec3fElement(new org.web3d.x3d.jsail.fields.SFVec3f(delegate.getValue()));
}
	public MFDoubleElement getWeightElement() { 		 return new MFDoubleElement(new org.web3d.x3d.jsail.fields.MFDouble(delegate.getWeight()));
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
