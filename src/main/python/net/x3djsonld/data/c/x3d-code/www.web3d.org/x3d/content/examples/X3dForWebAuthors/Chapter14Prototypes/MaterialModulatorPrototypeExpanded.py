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
    meta(content='MaterialModulatorPrototypeExpanded.x3d',name='title'),
    meta(content='Provide example for expansion of a MaterialModulator as regular X3D nodes, rather than a ProtoDeclare/ProtoInstance combination. MaterialModulator mimics a Material node and modulates diffuseColor field as an animation effect.',name='description'),
    meta(content='Don Brutzman, John Carlson, Roy Walmsley',name='creator'),
    meta(content='2 July 2016',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='X3D prototype expander, IS/connect, Script inputOutput field',name='subject'),
    meta(content='MaterialModulator.png',name='Image'),
    meta(content='MaterialModulator.x3d',name='reference'),
    meta(content='JSON prototype expander https://github.com/coderextreme/X3DJSONLD',name='reference'),
    meta(content='Create corresponding web page describing Prototype Expander design.',name='TODO'),
    meta(content='Create stylesheet converter matching this Prototype Expander design pattern.',name='TODO'),
    meta(content='Add external ROUTEs to original example as a further test case for Prototype Expander design.',name='TODO'),
    meta(content='https://github.com/coderextreme/X3DJSONLD/blob/master/PrototypeExpander.js',name='reference'),
    meta(content='https://github.com/coderextreme/X3DJSONLD/blob/master/ServerPrototypeExpander.js',name='reference'),
    meta(content='X3D Tooltips: ProtoBody https://www.web3d.org/x3d/content/X3dTooltips.html#ProtoBody',name='reference'),
    meta(content='4.4.4.3 PROTO definition semantics https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/concepts.html#PROTOdefinitionsemantics',name='reference'),
    meta(content='[x3d-public] Prototype Expander, Question on design of instance expansions: http://web3d.org/pipermail/x3d-public_web3d.org/2016-July/004982.html',name='reference'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/MaterialModulatorPrototypeExpanded.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='MaterialModulatorPrototypeExpanded.x3d'),
    Shape(
      geometry=Sphere(),
      appearance=Appearance(
        #  Prototype Expander design note: only first node (the node type) of the prototype is substituted here. 
        material=Material(DEF='MaterialModulatorNodeExpanded1',diffuseColor=(0.5,0.1,0.1),
          #  Prototype Expander design note: no children nodes found in originally defined initial ProtoBody node, so no contained child nodes appear here 
          ))),
    #  Prototype Expander design note: only first node (the node type) of the prototype is renderable above. when Switch is first allowed 
    Switch(DEF='HideAdditionalPrototypeBodyNodesExpanded1',whichChoice=-1,
      #  Prototype Expander design note: all children inside a Switch continue to receive/send events. 
      children=[
      Group(
        #  Prototype Expander design note: additional follow-on nodes from the original ProtoBody are placed here. 
        children=[
        Script(DEF='MaterialModulatorScriptExpanded1',
          field=[
          field(accessType='inputOutput',name='enabled',type='SFBool',value=True),
          field(accessType='inputOutput',name='diffuseColor',type='SFColor',value=(0.5,0.1,0.1)),
          field(accessType='outputOnly',name='newColor',type='SFColor'),
          field(accessType='inputOnly',name='clockTrigger',type='SFTime')]),
        #  Clock tickles Script to wake up and compute a new value 
        ROUTE(fromField='newColor',fromNode='MaterialModulatorScriptExpanded1',toField='diffuseColor',toNode='MaterialModulatorNodeExpanded1'),
        TimeSensor(DEF='ModulationClockExpanded1',cycleInterval=0.1,loop=True),
        ROUTE(fromField='cycleTime',fromNode='ModulationClockExpanded1',toField='clockTrigger',toNode='MaterialModulatorScriptExpanded1')])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for MaterialModulatorPrototypeExpanded.py")
