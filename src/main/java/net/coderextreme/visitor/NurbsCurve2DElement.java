package net.coderextreme.visitor;
public class NurbsCurve2DElement extends org.web3d.x3d.jsail.NURBS.NurbsCurve2D implements VisitableElement
{
	private org.web3d.x3d.jsail.NURBS.NurbsCurve2D delegate = null;
	public NurbsCurve2DElement(org.web3d.x3d.jsail.NURBS.NurbsCurve2D delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getClosedElement().accept(v);
		getControlPointElement().accept(v);
		getISElement().accept(v);
		getKnotElement().accept(v);
		getMetadataElement().accept(v);
		getOrderElement().accept(v);
		getTessellationElement().accept(v);
		getWeightElement().accept(v);
		getDEFElement().accept(v);
		getUSEElement().accept(v);
		getCssClassElement().accept(v);
		getCssStyleElement().accept(v);
	}
	public SFBoolElement getClosedElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getClosed()));
}
	public MFVec2dElement getControlPointElement() { 		 return new MFVec2dElement(new org.web3d.x3d.jsail.fields.MFVec2d(delegate.getControlPoint()));
}
	public SFNodeElement getISElement() { 		 return new SFNodeElement(new ISElement(delegate.getIS()));
}
	public MFDoubleElement getKnotElement() { 		 return new MFDoubleElement(new org.web3d.x3d.jsail.fields.MFDouble(delegate.getKnot()));
}
	public SFNodeElement getMetadataElement() { 		 return new SFNodeElement(new X3DMetadataObjectElement(delegate.getMetadata()));
}
	public SFInt32Element getOrderElement() { 		 return new SFInt32Element(new org.web3d.x3d.jsail.fields.SFInt32(delegate.getOrder()));
}
	public SFInt32Element getTessellationElement() { 		 return new SFInt32Element(new org.web3d.x3d.jsail.fields.SFInt32(delegate.getTessellation()));
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
