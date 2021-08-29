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

newModel=X3D(profile='Immersive',version='3.3',
  head=head(
    children=[
    meta(content='IntroductionMessage.x3d',name='title'),
    meta(content='Welcome text message (positioned high and low) that introduces visitor to Kelp Forest Exhibit upon initial entry - zoom camera back beyond 40m range to make this text visible.',name='description'),
    meta(content='Todd Gagnon and Mark A. Boyd',name='creator'),
    meta(content='1 June 1998',name='created'),
    meta(content='17 December 2002',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='http://faculty.nps.edu/brutzman/kelp',name='reference'),
    meta(content='Kelp Forest 3D models',name='subject'),
    meta(content='All content has permissions for free use. Please provide credit to the Naval Postgraduate School (NPS) Modeling Virtual Environments and Simulation (MOVES) Institute.',name='accessRights'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/IntroductionMessage.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(info=["Level of detail introduction message for model of the Monterey Bay Aquarium Kelp Forest","DTG of last Update: 021900Jun98","Added: ","Updated: messageTwo1.2.wrl","Modeled by: Todd Gagnon and Mark A. Boyd"],title='introductionMessage1.2.wrl'),
    #  This is a sort of "reverse" LOD: text is hidden at close range to avoid distraction, but becomes visible when seen from entry viewpoint (behond LOD range 40m). 
    NavigationInfo(speed=10,type=["FLY","ANY"]),
    LOD(forceTransitions=True,range=[30],
      children=[
      WorldInfo(info=["null node"]),
      Group(
        children=[
        Transform(translation=(0.0,30.0,-60.0),
          children=[
          Shape(
            appearance=Appearance(DEF='WordsAppearance',
              material=Material(diffuseColor=(0.9,0.9,0.9))),
            geometry=Text(string=["Welcome to the NPS simulation of the","Monterey Bay Aquarium Kelp Forest"],
              fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=6.0,style_='BOLD')))]),
        Transform(translation=(0.0,-30.0,-60.0),
          children=[
          Shape(
            appearance=Appearance(USE='WordsAppearance'),
            geometry=Text(string=["Find sharks!  See new viewpoints!","Press PageDown, wait and watch."],
              fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=5.0,style_='BOLD')))])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for IntroductionMessage.py")
