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

newModel=X3D(profile='CADInterchange',version='3.2',
  head=head(
    children=[
    component(level=2,name='CADGeometry'),
    component(level=2,name='Geometry2D'),
    component(level=1,name='EnvironmentalEffects'),
    component(level=4,name='Shape'),
    meta(content='CadDesignPatternExampleBushing.x3d',name='title'),
    meta(content='Design pattern examples demonstrating proper hierarchy of CAD nodes: CADLayer, CADAssembly, CADPart, and then CADFace.',name='description'),
    meta(content='Vince Marchetti, Don Brutzman',name='creator'),
    meta(content='Xj3D, http://www.xj3d.org',name='translator'),
    meta(content='24 June 2012',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Only InstantReality, X3DOM, OctagaVs and Xj3D are properly handling geometry of Disk2D end caps',name='warning'),
    meta(content='CadDesignPatternExampleBushingInstantReality.png',name='Image'),
    meta(content='CadDesignPatternExampleBushingBsContact.png',name='Image'),
    meta(content='CadDesignPatternExampleBushingCobweb.png',name='Image'),
    meta(content='CadDesignPatternExampleBushingFreeX3d.png',name='Image'),
    meta(content='CadDesignPatternExampleBushingInstantReality.png',name='Image'),
    meta(content='CadDesignPatternExampleBushingOctagaVs.png',name='Image'),
    meta(content='CadDesignPatternExampleBushingView3dscene.png',name='Image'),
    meta(content='CadDesignPatternExampleBushingX3dom.png',name='Image'),
    meta(content='CadDesignPatternExampleBushingXj3d.png',name='Image'),
    meta(content='https://www.web3d.org/member-only/mantis/view.php?id=528',name='reference'),
    meta(content='https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/CADGeometry.html',name='reference'),
    meta(content='X3D CAD CADInterchange profile',name='subject'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/CAD/CadDesignPatternExampleBushing.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='CadDesignPatternExampleBushing.x3d'),
    Background(skyColor=[(0.9607843,1,0.9607843)]),
    Viewpoint(description='Hello CAD bushing',orientation=(1,0,0,-0.321751),position=(0,5,15)),
    CADAssembly(name='DesignPatternAssembly',
      children=[
      CADPart(name='CADPartSides',
        #  the rotation and translation attributes serve to position the bushing within the assembly 
        children=[
        CADFace(name='outerSurface',
          shape=Shape(
            #  note solid='true' and so one-sided external rendering only 
            geometry=Cylinder(bottom=False,height=3,radius=2,top=False),
            appearance=Appearance(DEF='AppearanceGrey',
              material=Material(),))),
        CADFace(name='innerSurface',
          shape=Shape(
            #  note solid='false' and so two-sided internal + external rendering 
            geometry=Cylinder(bottom=False,height=3,solid=False,top=False),
            appearance=Appearance(USE='AppearanceGrey')))]),
      CADPart(name='CADPartTop',rotation=(1,0,0,1.5708),translation=(0,1.5,0),
        children=[
        CADFace(name='topCap',
          shape=Shape(
            geometry=Disk2D(innerRadius=1,outerRadius=2),
            appearance=Appearance(USE='AppearanceGrey')))]),
      CADPart(name='CADPartBottom',rotation=(-1,0,0,1.5708),translation=(0,-1.5,0),
        children=[
        CADFace(name='bottomCap',
          shape=Shape(
            geometry=Disk2D(innerRadius=1,outerRadius=2),
            appearance=Appearance(USE='AppearanceGrey')))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for CadDesignPatternExampleBushing.py")
