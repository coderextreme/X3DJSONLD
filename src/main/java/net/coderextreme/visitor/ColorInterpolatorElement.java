package net.coderextreme.visitor;
public class ColorInterpolatorElement extends org.web3d.x3d.jsail.Interpolation.ColorInterpolator implements VisitableElement
{
	private org.web3d.x3d.jsail.Interpolation.ColorInterpolator delegate = null;
	public ColorInterpolatorElement(org.web3d.x3d.jsail.Interpolation.ColorInterpolator delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getISElement().accept(v);
		getKeyElement().accept(v);
		getKeyValueElement().accept(v);
		getMetadataElement().accept(v);
		getValueElement().accept(v);
		getDEFElement().accept(v);
		getUSEElement().accept(v);
		getCssClassElement().accept(v);
		getCssStyleElement().accept(v);
	}
	public SFNodeElement getISElement() { 		 return new SFNodeElement(new ISElement(delegate.getIS()));
}
	public MFFloatElement getKeyElement() { 		 return new MFFloatElement(new org.web3d.x3d.jsail.fields.MFFloat(delegate.getKey()));
}
	public MFColorElement getKeyValueElement() { 		 return new MFColorElement(new org.web3d.x3d.jsail.fields.MFColor(delegate.getKeyValue()));
}
	public SFNodeElement getMetadataElement() { 		 return new SFNodeElement(new X3DMetadataObjectElement(delegate.getMetadata()));
}
	public SFColorElement getValueElement() { 		 return new SFColorElement(new org.web3d.x3d.jsail.fields.SFColor(delegate.getValue()));
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
