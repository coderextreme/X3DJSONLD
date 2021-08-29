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
    meta(content='UnderwayDDG.x3d',name='title'),
    meta(content='Ryan Ernst, Naval Postgraduate School',name='creator'),
    meta(content='Jeff Weekly, Naval Postgraduate School',name='contributor'),
    meta(content='13 September 2004',name='created'),
    meta(content='1 January 2019',name='modified'),
    meta(content='https://savage.nps.edu/Savage/AircraftHelicopters/SH60bSeahawkUnitedStates/UnderwayDDG.x3d',name='identifier'),
    meta(content='CS3204 class final project: SH-60B Scene',name='description'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    #  DDG underway in the ocean. 
    children=[
    Group(DEF='UnderwayDDG',
      children=[
      Shape(
        appearance=Appearance(
          material=Material(ambientIntensity=1.0,diffuseColor=(.5882,.5882,.5882),shininess=.145),
          texture=ImageTexture(url=["DDG.jpg","https://savage.nps.edu/Savage/AircraftHelicopters/SH60bSeahawkUnitedStates/DDG.jpg"])),
        geometry=IndexedFaceSet(coordIndex=[5,0,6,-1,1,6,0,-1,6,1,7,-1,2,7,1,-1,7,2,8,-1,3,8,2,-1,8,3,9,-1,4,9,3,-1,10,5,11,-1,6,11,5,-1,11,6,12,-1,7,12,6,-1,12,7,13,-1,8,13,7,-1,13,8,14,-1,9,14,8,-1,15,10,16,-1,11,16,10,-1,16,11,17,-1,12,17,11,-1,17,12,18,-1,13,18,12,-1,18,13,19,-1,14,19,13,-1,20,15,21,-1,16,21,15,-1,21,16,22,-1,17,22,16,-1,22,17,23,-1,18,23,17,-1,23,18,24,-1,19,24,18,-1],texCoordIndex=[15,10,16,-1,11,16,10,-1,16,11,17,-1,12,17,11,-1,17,12,18,-1,13,18,12,-1,18,13,19,-1,14,19,13,-1,20,15,21,-1,16,21,15,-1,21,16,22,-1,17,22,16,-1,22,17,23,-1,18,23,17,-1,23,18,24,-1,19,24,18,-1,25,20,26,-1,21,26,20,-1,26,21,27,-1,22,27,21,-1,27,22,28,-1,23,28,22,-1,28,23,29,-1,24,29,23,-1,30,25,31,-1,26,31,25,-1,31,26,32,-1,27,32,26,-1,32,27,33,-1,28,33,27,-1,33,28,34,-1,29,34,28,-1],
          coord=Coordinate(point=[(-100,0,97.97),(-50,0,97.97),(0,0,97.97),(50,0,97.97),(100,0,97.97),(-100,0,48.98),(-50,0,48.98),(0,0,48.98),(50,0,48.98),(100,0,48.98),(-100,0,0),(-50,0,0),(0,0,0),(50,0,0),(100,0,0),(-100,0,-48.98),(-50,0,-48.98),(0,0,-48.98),(50,0,-48.98),(100,0,-48.98),(-100,0,-97.97),(-50,0,-97.97),(0,0,-97.97),(50,0,-97.97),(100,0,-97.97)]),
          texCoord=TextureCoordinate(point=[(0,0),(0.25,0),(0.5,0),(0.75,0),(1,0),(0,0),(0.25,0),(0.5,0),(0.75,0),(1,0),(0,0),(0.25,0),(0.5,0),(0.75,0),(1,0),(0,0.25),(0.25,0.25),(0.5,0.25),(0.75,0.25),(1,0.25),(0,0.5),(0.25,0.5),(0.5,0.5),(0.75,0.5),(1,0.5),(0,0.75),(0.25,0.75),(0.5,0.75),(0.75,0.75),(1,0.75),(0,1),(0.25,1),(0.5,1),(0.75,1),(1,1)])))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for UnderwayDDG.py")
