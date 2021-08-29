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

newModel=X3D(profile='Interchange',version='3.3',
  head=head(
    children=[
    meta(content='SardineX.x3d',name='title'),
    meta(content='Individual Sardine for use in the Sardine School.',name='description'),
    meta(content='Stewart Liles',name='creator'),
    meta(content='Sean Hynes',name='translator'),
    meta(content='25 September 1998',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/SardineX.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='SardineX.x3d'),
    Group(
      children=[
      Transform(scale=(.25,.10,.25),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(ambientIntensity=.2,diffuseColor=(.61,.61,.61),specularColor=(.76,.76,.76))),
          geometry=IndexedFaceSet(DEF='Sardine',ccw=False,coordIndex=[0,2,1,-1,0,3,2,-1,0,4,3,-1,0,5,4,-1,0,1,8,-1,0,8,7,-1,0,7,6,-1,0,6,5,-1,1,2,10,9,-1,2,3,11,10,-1,3,4,12,11,-1,4,5,13,12,-1,1,9,16,8,-1,8,16,15,7,-1,7,15,14,6,-1,6,14,13,5,-1,9,10,18,17,-1,10,11,19,18,-1,11,12,20,19,-1,12,13,12,20,-1,9,17,24,16,-1,16,24,23,15,-1,15,23,22,14,-1,14,22,21,13,-1,17,18,26,25,-1,18,19,27,26,-1,19,20,28,27,-1,20,21,29,28,-1,17,25,32,24,-1,24,32,31,22,-1,23,31,30,22,-1,22,30,29,21,-1,25,26,34,33,-1,26,27,35,34,-1,27,28,36,35,-1,28,29,37,36,-1,25,33,40,32,-1,32,40,39,31,-1,31,39,38,30,-1,30,38,37,29,-1,33,34,41,-1,34,35,41,-1,35,42,41,-1,35,43,42,-1,36,43,35,-1,36,37,43,-1,33,41,40,-1,40,41,39,-1,39,41,42,-1,39,42,43,-1,39,43,37,-1,38,43,37,-1],creaseAngle=3.14,solid=False,
            coord=Coordinate(point=[(0,0,-1.5),(0,.5,-1),(-.12,.25,-1),(-.25,1,-1),(-.12,-.25,-1),(0,-.5,-1),(.12,-.25,-1),(.25,0,-1),(.12,.25,-1),(0,1,0),(-.25,.5,0),(-.5,0,0),(-.25,-.5,0),(0,-1,0),(.25,-.5,0),(.5,0,0),(.25,.5,0),(0,.88,.9),(-.19,.44,.9),(-.37,0,.9),(-.19,-.44,.9),(0,-.88,.9),(.19,-.44,.9),(.37,0,.9),(.19,.44,.9),(0,.75,1.75),(-.12,.35,1.75),(-.25,0,1.75),(-.12,-.35,1.75),(0,-.75,1.75),(.12,-.35,1.75),(.25,0,1.75),(.12,.35,1.75),(0,.5,2.5),(-.05,.25,2.5),(-.1,0,2.5),(-.05,-.25,2.5),(0,-.5,2.5),(.05,-.25,2.5),(.1,0,2.5),(.05,.25,2.5),(0,1.25,3.25),(0,0,3),(0,-1.25,3.25)])))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for SardineX.py")
