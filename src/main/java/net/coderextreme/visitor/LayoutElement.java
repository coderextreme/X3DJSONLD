package net.coderextreme.visitor;
public class LayoutElement extends org.web3d.x3d.jsail.Layout.Layout implements VisitableElement
{
	private org.web3d.x3d.jsail.Layout.Layout delegate = null;
	public LayoutElement(org.web3d.x3d.jsail.Layout.Layout delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getAlignElement().accept(v);
		getISElement().accept(v);
		getMetadataElement().accept(v);
		getOffsetElement().accept(v);
		getOffsetUnitsElement().accept(v);
		getScaleModeElement().accept(v);
		getSizeElement().accept(v);
		getSizeUnitsElement().accept(v);
		getDEFElement().accept(v);
		getUSEElement().accept(v);
		getCssClassElement().accept(v);
		getCssStyleElement().accept(v);
	}
	public MFStringElement getAlignElement() { 		 return new MFStringElement(new org.web3d.x3d.jsail.fields.MFString(delegate.getAlign()));
}
	public SFNodeElement getISElement() { 		 return new SFNodeElement(new ISElement(delegate.getIS()));
}
	public SFNodeElement getMetadataElement() { 		 return new SFNodeElement(new X3DMetadataObjectElement(delegate.getMetadata()));
}
	public MFFloatElement getOffsetElement() { 		 return new MFFloatElement(new org.web3d.x3d.jsail.fields.MFFloat(delegate.getOffset()));
}
	public MFStringElement getOffsetUnitsElement() { 		 return new MFStringElement(new org.web3d.x3d.jsail.fields.MFString(delegate.getOffsetUnits()));
}
	public MFStringElement getScaleModeElement() { 		 return new MFStringElement(new org.web3d.x3d.jsail.fields.MFString(delegate.getScaleMode()));
}
	public MFFloatElement getSizeElement() { 		 return new MFFloatElement(new org.web3d.x3d.jsail.fields.MFFloat(delegate.getSize()));
}
	public MFStringElement getSizeUnitsElement() { 		 return new MFStringElement(new org.web3d.x3d.jsail.fields.MFString(delegate.getSizeUnits()));
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
