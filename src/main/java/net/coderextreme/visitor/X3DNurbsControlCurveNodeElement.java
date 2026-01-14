package net.coderextreme.visitor;
public class X3DNurbsControlCurveNodeElement implements org.web3d.x3d.sai.NURBS.X3DNurbsControlCurveNode ,  VisitableElement
{
	private org.web3d.x3d.sai.NURBS.X3DNurbsControlCurveNode delegate = null;
	public X3DNurbsControlCurveNodeElement(org.web3d.x3d.sai.NURBS.X3DNurbsControlCurveNode delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getControlPointElement().accept(v);
		getISElement().accept(v);
		getMetadataElement().accept(v);
		getDEFElement().accept(v);
		getUSEElement().accept(v);
		getCssClassElement().accept(v);
		getCssStyleElement().accept(v);
	}
	public MFVec2dElement getControlPointElement() { 		 return new MFVec2dElement(new org.web3d.x3d.jsail.fields.MFVec2d(delegate.getControlPoint()));
}
	public SFNodeElement getISElement() { 		 return new SFNodeElement(new ISElement(delegate.getIS()));
}
	public SFNodeElement getMetadataElement() { 		 return new SFNodeElement(new X3DMetadataObjectElement(delegate.getMetadata()));
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
