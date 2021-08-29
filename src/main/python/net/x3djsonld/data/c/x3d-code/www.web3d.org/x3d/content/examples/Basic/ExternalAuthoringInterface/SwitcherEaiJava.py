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
    meta(content='SwitcherEaiJava.x3d',name='title'),
    meta(content='SwitcherEaiJavaPage.html',name='example'),
    meta(content='External Authoring Interface (EAI) Java example from VRML 97 Amendment 2 specification.',name='description'),
    meta(content='Martin Reddy',name='creator'),
    meta(content='Xeena VRML importer, X3D-Edit 3.1, https://www.web3d.org/x3d/content/README.X3D-Edit.html',name='translator'),
    meta(content='Don Brutzman',name='translator'),
    meta(content='8 March 2001',name='created'),
    meta(content='23 June 2003',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Under development. VRML 97 EAI support appears inconsistent for various browsers.',name='warning'),
    meta(content='SwitcherEai.java',name='reference'),
    meta(content='javadoc/index.html',name='reference'),
    meta(content='originals/switcher/',name='reference'),
    meta(content='https://www.web3d.org/technicalinfo/specifications/ISO_IEC_14772-All/part2/javaBind.html#Examples',name='reference'),
    meta(content='https://www.web3d.org/technicalinfo/specifications/ISO_IEC_14772-All/index.html',name='reference'),
    meta(content='http://www.parallelgraphics.com/developer/products/cortona/eai',name='reference'),
    meta(content='External Authoring Interface (EAI) Java example',name='subject'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/ExternalAuthoringInterface/SwitcherEaiJava.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='SwitcherEaiJava.x3d'),
    Group(DEF='RootNode',
      children=[
      Switch(whichChoice=0,
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(1.0,0.0,1.0))),
          geometry=Box(size=(4.0,4.0,4.0))),
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.0,1.0,1.0))),
          geometry=Sphere(radius=2.0))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for SwitcherEaiJava.py")
