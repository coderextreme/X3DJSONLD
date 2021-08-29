###############################################
#
# Now available: developmental python x3d.py package on PyPi for import.
#   This approach greatly simplifies Python X3D deployment and use.
#   https://pypi.org/project/x3d
#
# Installation:
#       pip install x3d
# or
#       python -m pip install x3d
#
# Developer options for loading x3d package:
#
#    from x3d import *  # preferred approach, terser source that avoids x3d.* class prefixes
#
# or
#    import x3d         # traditional way to subclass x3d package, all classes require x3d.* prefix
#                       # but python source is very verbose, for example x3d.Material x3d.Shape etc.
#                       # X3dToPython.xslt stylesheet insertPackagePrefix=true supports this option.

from x3d import *

###############################################

newModel=X3D(profile='Immersive',version='3.0',
  head=head(
    children=[
    meta(content='Figure31_5WoodAppearanceExternalPrototypes.x3d',name='title'),
    meta(content='Figure 31.5, The VRML 2.0 Sourcebook, Copyright [1997] By Andrea L. Ames, David R. Nadeau, and John L. Moreland',name='creator'),
    meta(content='Don Brutzman',name='translator'),
    meta(content='http://www.wiley.com/legacy/compbooks/vrml2sbk/ch31/31fig05.htm',name='reference'),
    meta(content='28 September 2000',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Two wood blocks using appearance-node types from an external appearance library file. Note modification of second prototype using a TextureTransform node parameter.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter31Prototypes/Figure31_5WoodAppearanceExternalPrototypes.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='Figure31_5WoodAppearanceExternalPrototypes.x3d'),
    ExternProtoDeclare(name='DarkOak',url=["Figure31_4WoodAppearancePrototypesLibrary.x3d#DarkOak","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter31Prototypes/Figure31_4WoodAppearancePrototypesLibrary.x3d#DarkOak","Figure31_4WoodAppearancePrototypesLibrary.wrl#DarkOak","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter31Prototypes/Figure31_4WoodAppearancePrototypesLibrary.wrl#DarkOak"],
      field=[
      field(accessType='inputOutput',name='textureTransform',type='SFNode')]),
    ExternProtoDeclare(name='LightOak',url=["Figure31_4WoodAppearancePrototypesLibrary.x3d#LightOak","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter31Prototypes/Figure31_4WoodAppearancePrototypesLibrary.x3d#LightOak","Figure31_4WoodAppearancePrototypesLibrary.wrl#LightOak","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter31Prototypes/Figure31_4WoodAppearancePrototypesLibrary.wrl#LightOak"],
      field=[
      field(accessType='inputOutput',name='textureTransform',type='SFNode')]),
    Transform(translation=(-2,0,0),
      children=[
      Shape(
        geometry=Box(),
        appearance=ProtoInstance(name='DarkOak'))]),
    Transform(translation=(2,0,0),
      children=[
      Shape(
        geometry=Box(),
        appearance=ProtoInstance(name='LightOak',
          fieldValue=[
          fieldValue(name='textureTransform',
            children=[
            TextureTransform(center=(-0,5),rotation=0.758,scale=(2,0.5),translation=(0.5,0))])]))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Figure31_5WoodAppearanceExternalPrototypes.py")
