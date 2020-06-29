// Description: Perform geometric computations for ViewFrustum prototype
// Filename:    ViewFrustumPrototypeScript.js
// Author:      Don Brutzman
// Identifier:  http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ViewFrustumPrototypeScript.js
// Created:     16 August 2008
// Revised:     10 October 2015
// Reference:   ViewFrustumPrototype.x3d
// Reference:   ViewFrustumExample.x3d
// Drawing:     ViewFrustumComputation.png
// License:     ../license.html

function floatArrayToString (inputArray) // overcome irregular .toString() support by X3D browsers
{
    var outputString = '';
    var i;
    for (i=0; i < inputArray.length; i++)
    {
        outputString += inputArray[i].toString();
        if (i < inputArray.length - 1) 
        {
            outputString += ' '; // no extra space at end
        }
    }
    return outputString;
}

function set_visible (eventValue)
{
    visible = eventValue;
    if (visible)
    {
        visibilitySwitchSelection =  0;
    }
    else 
    {
        visibilitySwitchSelection = -1;
    }
}

function initialize ()
{
    var scriptName = 'ViewFrustumPrototypeScript';
    var fieldOfView, nearClipPlaneDistance, farClipPlaneDistance;

    Browser.print ('[' + scriptName + '] ' + 'trace=' + trace + '\n');

    if ((ViewpointNode == null) && (NavigationInfoNode == null))
    {
        Browser.print ('[' + scriptName + '] ' + 'Viewpoint and NavigationInfo nodes both missing, using default values\n');
    }
    else if (ViewpointNode == null)
    {
        Browser.print ('[' + scriptName + '] ' + 'Viewpoint node missing, using default values\n');
    }
    else if (NavigationInfoNode == null)
    {
        Browser.print ('[' + scriptName + '] ' + 'NavigationInfo node missing, using default values\n');
    }
    
    if (ViewpointNode != null)
    {
        if (trace) 
        {
            Browser.print ('[' + scriptName + '] ' + 'input  ' +
            '<Viewpoint position="'        + ViewpointNode.position.toString() + '"' +
                   ' orientation="'        + ViewpointNode.orientation.toString() + '"' +
                   ' fieldOfView="'        + ViewpointNode.fieldOfView.toString() + '"' + '/>\n');
       }
        position_changed    = ViewpointNode.position;
        orientation_changed = ViewpointNode.orientation_changed;
        fieldOfView = ViewpointNode.fieldOfView;
    }
    else
    {
        position_changed    = new SFVec3f    (0, 0, 10);
        orientation_changed = new SFRotation (0, 1, 0, 0);
        fieldOfView = 0.7854;
    }
    if (trace) 
    {
        Browser.print ('[' + scriptName + '] ' + 'ViewFrustum fieldOfView=' + fieldOfView + '\n');
    }

    if (NavigationInfoNode != null)
    {
        if (trace)
        {
            Browser.print ('[' + scriptName + '] ' + 'input  ' +
            '<NavigationInfo avatarSize="' +
                floatArrayToString (NavigationInfoNode.avatarSize) + '"' +
            ' visibilityLimit="' + NavigationInfoNode.visibilityLimit.toString() + '"/>\n');
        }
        nearClipPlaneDistance = NavigationInfoNode.avatarSize[0];
         farClipPlaneDistance = NavigationInfoNode.visibilityLimit;
    }
    else
    {
        // default avatarSize array: [0.25 1.6 0.75]
        nearClipPlaneDistance =   0.25;
        farClipPlaneDistance  = 100.0;
    }
    if (trace) 
    {
        Browser.print ('[' + scriptName + '] ' +
            'ViewFrustum farClipPlaneDistance=' + farClipPlaneDistance + '\n');
    }

    if  (farClipPlaneDistance == 0) 
    {
        farClipPlaneDistance = 100.0;
        Browser.print ('[' + scriptName + '] ' + 
            ' found visibilityLimit="0" i.e. unlimited, instead drawing farClipPlaneDistance at ' + farClipPlaneDistance + 'm\n');
    }    
    var nearHalfWidth  = Math.tan(fieldOfView / 2.0) * nearClipPlaneDistance;
    var  farHalfWidth  = Math.tan(fieldOfView / 2.0) *  farClipPlaneDistance;
    
    spine_changed = new MFVec3f (new SFVec3f (0.0, 0.0, nearClipPlaneDistance), 
                                 new SFVec3f (0.0, 0.0,  farClipPlaneDistance));
    scale_changed        = new MFVec2f (new SFVec2f (nearHalfWidth, aspectRatio * nearHalfWidth),
                                        new SFVec2f ( farHalfWidth, aspectRatio *  farHalfWidth));
    if (trace) 
    {
        Browser.print ('[' + scriptName + '] ' + 'output ' +
        '<Extrusion DEF="FrustumExtrusion"' +
               ' spine="' + floatArrayToString (spine_changed) + '"' +
               ' scale="' + floatArrayToString (scale_changed) + '"' + '/>\n');  // default crossSection used
    }
    point_changed = new MFVec3f (
      new SFVec3f ( nearHalfWidth,  aspectRatio * nearHalfWidth, nearClipPlaneDistance),
      new SFVec3f ( nearHalfWidth, -aspectRatio * nearHalfWidth, nearClipPlaneDistance),
      new SFVec3f (-nearHalfWidth, -aspectRatio * nearHalfWidth, nearClipPlaneDistance),
      new SFVec3f (-nearHalfWidth,  aspectRatio * nearHalfWidth, nearClipPlaneDistance),
      new SFVec3f (  farHalfWidth,  aspectRatio *  farHalfWidth,  farClipPlaneDistance),
      new SFVec3f (  farHalfWidth,  aspectRatio * -farHalfWidth,  farClipPlaneDistance),
      new SFVec3f ( -farHalfWidth,  aspectRatio * -farHalfWidth,  farClipPlaneDistance),
      new SFVec3f ( -farHalfWidth,  aspectRatio *  farHalfWidth,  farClipPlaneDistance));
    if (trace) 
    {
        Browser.print ('[' + scriptName + '] ' + 'output ' +
        '<Coordinate DEF="FrustumCoordinate"' +
               ' point="' + floatArrayToString (point_changed) + '"' + '/>\n');
    }
    set_visible (visible);
}

function recompute (value)
{
    if (value == true) 
    {
        initialize();
    }
}
