package net.coderextreme.visitor;
public class NurbsTextureCoordinateElement extends org.web3d.x3d.jsail.NURBS.NurbsTextureCoordinate implements VisitableElement
{
	private org.web3d.x3d.jsail.NURBS.NurbsTextureCoordinate delegate = null;
	public NurbsTextureCoordinateElement(org.web3d.x3d.jsail.NURBS.NurbsTextureCoordinate delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getControlPointElement().accept(v);
		getISElement().accept(v);
		getMetadataElement().accept(v);
		getUDimensionElement().accept(v);
		getUKnotElement().accept(v);
		getUOrderElement().accept(v);
		getVDimensionElement().accept(v);
		getVKnotElement().accept(v);
		getVOrderElement().accept(v);
		getWeightElement().accept(v);
		getDEFElement().accept(v);
		getUSEElement().accept(v);
		getCssClassElement().accept(v);
		getCssStyleElement().accept(v);
	}
	public MFVec2fElement getControlPointElement() { 		 return new MFVec2fElement(new org.web3d.x3d.jsail.fields.MFVec2f(delegate.getControlPoint()));
}
	public SFNodeElement getISElement() { 		 return new SFNodeElement(new ISElement(delegate.getIS()));
}
	public SFNodeElement getMetadataElement() { 		 return new SFNodeElement(new X3DMetadataObjectElement(delegate.getMetadata()));
}
	public SFInt32Element getUDimensionElement() { 		 return new SFInt32Element(new org.web3d.x3d.jsail.fields.SFInt32(delegate.getUDimension()));
}
	public MFDoubleElement getUKnotElement() { 		 return new MFDoubleElement(new org.web3d.x3d.jsail.fields.MFDouble(delegate.getUKnot()));
}
	public SFInt32Element getUOrderElement() { 		 return new SFInt32Element(new org.web3d.x3d.jsail.fields.SFInt32(delegate.getUOrder()));
}
	public SFInt32Element getVDimensionElement() { 		 return new SFInt32Element(new org.web3d.x3d.jsail.fields.SFInt32(delegate.getVDimension()));
}
	public MFDoubleElement getVKnotElement() { 		 return new MFDoubleElement(new org.web3d.x3d.jsail.fields.MFDouble(delegate.getVKnot()));
}
	public SFInt32Element getVOrderElement() { 		 return new SFInt32Element(new org.web3d.x3d.jsail.fields.SFInt32(delegate.getVOrder()));
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
