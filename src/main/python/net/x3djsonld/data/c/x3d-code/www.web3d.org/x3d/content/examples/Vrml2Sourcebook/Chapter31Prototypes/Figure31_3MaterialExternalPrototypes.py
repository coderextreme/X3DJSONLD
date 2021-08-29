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
    meta(content='Figure31_3MaterialExternalPrototypes.x3d',name='title'),
    meta(content='Figure 31.3, The VRML 2.0 Sourcebook, Copyright [1997] By Andrea L. Ames, David R. Nadeau, and John L. Moreland',name='creator'),
    meta(content='http://www.wiley.com/legacy/compbooks/vrml2sbk/ch31/31fig03.htm',name='reference'),
    meta(content='Don Brutzman',name='translator'),
    meta(content='27 September 2000',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='A world that uses an externally declared node type.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter31Prototypes/Figure31_3MaterialExternalPrototypes.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='Figure31_3MaterialExternalPrototypes.x3d'),
    ExternProtoDeclare(name='Aqua',url=["Figure31_2MaterialPrototypesLibrary.wrl#Aqua","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter31Prototypes/Figure31_2MaterialPrototypesLibrary.wrl#Aqua","Figure31_2MaterialPrototypesLibrary.x3d#Aqua","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter31Prototypes/Figure31_2MaterialPrototypesLibrary.x3d#Aqua"]),
    ExternProtoDeclare(name='Gold',url=["Figure31_2MaterialPrototypesLibrary.wrl#Gold","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter31Prototypes/Figure31_2MaterialPrototypesLibrary.wrl#Gold","Figure31_2MaterialPrototypesLibrary.x3d#Gold","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter31Prototypes/Figure31_2MaterialPrototypesLibrary.x3d#Gold"]),
    ExternProtoDeclare(name='Aluminum',url=["Figure31_2MaterialPrototypesLibrary.wrl#Aluminum","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter31Prototypes/Figure31_2MaterialPrototypesLibrary.wrl#Aluminum","Figure31_2MaterialPrototypesLibrary.x3d#Aluminum","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter31Prototypes/Figure31_2MaterialPrototypesLibrary.x3d#Aluminum"]),
    ExternProtoDeclare(name='Copper',url=["Figure31_2MaterialPrototypesLibrary.wrl#Copper","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter31Prototypes/Figure31_2MaterialPrototypesLibrary.wrl#Copper","Figure31_2MaterialPrototypesLibrary.x3d#Copper","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter31Prototypes/Figure31_2MaterialPrototypesLibrary.x3d#Copper"]),
    Transform(translation=(-3,0,0),
      children=[
      Shape(
        geometry=Box(),
        appearance=Appearance(
          material=ProtoInstance(name='Aqua')))]),
    Transform(translation=(-1,0,0),
      children=[
      Shape(
        geometry=Sphere(),
        appearance=Appearance(
          material=ProtoInstance(name='Gold')))]),
    Transform(translation=(1,0,0),
      children=[
      Shape(
        geometry=Cone(),
        appearance=Appearance(
          material=ProtoInstance(name='Aluminum')))]),
    Transform(translation=(3,0,0),
      children=[
      Shape(
        geometry=Cylinder(),
        appearance=Appearance(
          material=ProtoInstance(name='Copper')))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Figure31_3MaterialExternalPrototypes.py")
