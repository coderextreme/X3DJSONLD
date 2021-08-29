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

newModel=X3D(profile='Interchange',version='3.0',
  head=head(
    children=[
    meta(content='Figure17_05dTexturedSodaCan.x3d',name='title'),
    meta(content='Figure 17.5d, The VRML 2.0 Sourcebook, Copyright [1997] By Andrea L. Ames, David R. Nadeau, and John L. Moreland',name='creator'),
    meta(content='http://www.wiley.com/legacy/compbooks/vrml2sbk/ch17/17fig05d.htm',name='reference'),
    meta(content='Don Brutzman',name='translator'),
    meta(content='28 August 2000',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='A soft drink can built by texture mapping soft-drink-can images to parts of a cylinder. Images include the top, the bottom, and the sides.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter17Textures/Figure17_05dTexturedSodaCan.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='Figure17_05dTexturedSodaCan.x3d'),
    Viewpoint(description='Soda can with multiple textures',position=(0,0.08,0.3)),
    #  Translate can upward so that bottom center is at 0 0 0 
    Transform(translation=(0,0.0728,0),
      children=[
      Shape(
        appearance=Appearance(
          texture=ImageTexture(url=["cantop.jpg","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter17Textures/cantop.jpg"])),
        geometry=Cylinder(bottom=False,height=0.1456,radius=0.0379,side=False)),
      Shape(
        appearance=Appearance(
          texture=ImageTexture(url=["canbot.jpg","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter17Textures/canbot.jpg"])),
        geometry=Cylinder(height=0.1456,radius=0.0379,side=False,top=False)),
      Shape(
        appearance=Appearance(
          texture=ImageTexture(url=["canlabel.jpg","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter17Textures/canlabel.jpg"])),
        geometry=Cylinder(bottom=False,height=0.1456,radius=0.0379,top=False))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Figure17_05dTexturedSodaCan.py")
